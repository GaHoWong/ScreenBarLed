#define BLINKER_WIFI
#define BLINKER_MIOT_LIGHT//支持小爱同学
#define BLINKER_WITHOUT_SSL      //非SSL加密通信接入，省堆栈  
#include <Blinker.h>

#define LED   2  // 板子上的灯 
char auth[] = "80ec0fe22c73"; // blinker app提供的秘钥
char ssid[] = "GaHo4";// wifi 名字
char pswd[] = "abc123456";// wifi 密码

bool wsState;
uint8_t wsMode = BLINKER_CMD_MIOT_DAY;
// 新建组件对象
BlinkerButton Button1("btn-01");//注意：要和APP组件’数据键名’一致
 
// 按下BlinkerAPP按键即会执行该函数
void button1_callback(const String & state) {
 BLINKER_LOG("get button state: ", state);
 digitalWrite(LED, !digitalRead(LED)); 
 Blinker.vibrate();
}
 
//小爱电源类操作的回调函数:
//当小爱同学向设备发起控制, 设备端需要有对应控制处理函数 
void miotPowerState(const String & state)
{
 BLINKER_LOG("need set power state: ", state);
 if (state == BLINKER_CMD_ON) {
 digitalWrite(LED, LOW);  //低电平点灯
 BlinkerMIOT.powerState("on");
 BlinkerMIOT.print();
 wsState=true;
 }
 else if (state == BLINKER_CMD_OFF) {
 digitalWrite(LED, HIGH); //高电平开灯
 BlinkerMIOT.powerState("off");
 BlinkerMIOT.print();
 wsState=false;
 }
}


//小爱同学 的回调查询函数，照抄即可。主要是查询 当前灯的状态
void miotQuery(int32_t queryCode)
{
    BLINKER_LOG("MIOT Query codes: ", queryCode);
    switch (queryCode)
    {
        case BLINKER_CMD_QUERY_ALL_NUMBER :
            BLINKER_LOG("MIOT Query All");
            BlinkerMIOT.powerState(wsState ? "on" : "off");
            BlinkerMIOT.color(0);
            BlinkerMIOT.mode(0);
            BlinkerMIOT.colorTemp(1000);
            BlinkerMIOT.brightness(1);
            BlinkerMIOT.print();
            break;
        case BLINKER_CMD_QUERY_POWERSTATE_NUMBER :
            BLINKER_LOG("MIOT Query Power State");
            BlinkerMIOT.powerState(wsState ? "on" : "off");
            BlinkerMIOT.print();
            break;   
        default :
            BlinkerMIOT.powerState(wsState ? "on" : "off");
            BlinkerMIOT.color(0);
            BlinkerMIOT.mode(0);
            BlinkerMIOT.colorTemp(1000);
            BlinkerMIOT.brightness(1);
            BlinkerMIOT.print();
            break;
    }
}

void setup() {
 // 初始化串口，并开启调试信息，调试用可以删除
 Serial.begin(115200); 
 BLINKER_DEBUG.stream(Serial);
 // 初始化IO
 pinMode(LED, OUTPUT); 
 digitalWrite(LED, HIGH); // 初始化 led 高电平 ，则灯熄灭状态
 
 // 初始化blinker
 Blinker.begin(auth, ssid, pswd);
 Button1.attach(button1_callback);
 
 //小爱同学务必在回调函数中反馈该控制状态 
 BlinkerMIOT.attachPowerState(miotPowerState);//注册回调函数
 BlinkerMIOT.attachQuery(miotQuery);
}
void loop() {
 Blinker.run();
 printf("1");
}
