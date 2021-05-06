#define BLINKER_PRINT Serial
#define BLINKER_MIOT_LIGHT
#define BLINKER_WIFI
#include <Blinker.h>
#include <Adafruit_NeoPixel.h>


#define LED   2  // 板子上的灯 
#define PIN 2  //  DIN PIN (GPIO15, D8)
#define NUMPIXELS 45  // Number of you led
Adafruit_NeoPixel pixels = Adafruit_NeoPixel(NUMPIXELS, PIN, NEO_GRB + NEO_KHZ800);

char auth[] = "80ec0fe22c73";/****秘钥****/
String comdata = "";//定义接收的字符buff
int numdata[10] = {0};
int LED_R=255,LED_G=255,LED_B=255,LED_Bright=180;// RGB和亮度
int colorT;//色温

bool WIFI_Status = true;
uint8_t wsMode = BLINKER_CMD_MIOT_DAY;


// 新建组件对象
BlinkerRGB RGB1("RGB");
BlinkerSlider LED_Brightness ("Bright");




void smartConfig()//配网函数
{
  WiFi.mode(WIFI_STA);
  Serial.println("\r\nWait for Smartconfig...");
  WiFi.beginSmartConfig();//等待手机端发出的用户名与密码
  while (1)
  {
    Serial.print(".");
    digitalWrite(LED_BUILTIN, HIGH);  
    delay(1000);                      
    digitalWrite(LED_BUILTIN, LOW);    
    delay(1000);                      
    if (WiFi.smartConfigDone())//退出等待
    {
      Serial.println("SmartConfig Success");
      Serial.printf("SSID:%s\r\n", WiFi.SSID().c_str());
      Serial.printf("PSW:%s\r\n", WiFi.psk().c_str());
      break;
    }
  }
}
void WIFI_Set()//
{
    Serial.println("\r\n正在连接");
    int count = 0;
    while(WiFi.status()!=WL_CONNECTED)
    {
        if(WIFI_Status)
        {
            Serial.print(".");
            digitalWrite(LED_BUILTIN, HIGH);  
            delay(500);                       
            digitalWrite(LED_BUILTIN, LOW);    
            delay(500);                 
            count++;
            if(count>=5)//5s
            {
                WIFI_Status = false;
                Serial.println("WiFi连接失败，请用手机进行配网"); 
            }
        }
        else
        {
            smartConfig();  //微信智能配网
        }
     }  
     Serial.println("连接成功");  
     Serial.print("IP:");
     Serial.println(WiFi.localIP());
}






void SET_RGB(int R,int G,int B,int bright)
{
    for (uint16_t i = 0; i < NUMPIXELS; i++) //把灯条变色
    {
        pixels.setPixelColor(i,R,G,B);
    }
    pixels.setBrightness(bright);//亮度
    pixels.show();    //送出显示
    LED_R = R;
    LED_G = G;
    LED_B = B;
}
//设置亮度
void SET_LED_Brightness(int bright)
{
  Serial.println(bright);
  if(bright >180){bright=180;}
  else if(bright <0){bright=0;}
  while(LED_Bright != bright){
     if(LED_Bright>bright){
      LED_Bright--;
      pixels.setBrightness(LED_Bright);
      }//亮度--
     else if(LED_Bright<bright){
      LED_Bright++;
      pixels.setBrightness(LED_Bright);
      }//亮度++
     Serial.println(LED_Bright);
     pixels.show();
     delay(2);                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                  
     }
    LED_Bright = bright;
}

//APP RGB颜色设置回调
void rgb1_callback(uint8_t r_value, uint8_t g_value, 
                    uint8_t b_value, uint8_t bright_value)
{
    
    //digitalWrite(LED_BUILTIN, !digitalRead(LED_BUILTIN));
    BLINKER_LOG("R value: ", r_value);
    BLINKER_LOG("G value: ", g_value);
    BLINKER_LOG("B value: ", b_value);
    BLINKER_LOG("Rrightness value: ", bright_value);
    LED_Bright = bright_value;
    SET_RGB(r_value,g_value,b_value,LED_Bright);
}



//APP RGB颜色设置回调
void LED_Brightness_callback(int bright_value)
{
    BLINKER_LOG("Brightness value: ", bright_value);
    
    LED_Bright = bright_value;
    pixels.setBrightness(LED_Bright);
    pixels.show();
    
}



//小爱电源类回调
void miotPowerState(const String & state)
{
  BLINKER_LOG("need set power state: ", state);
  if (state == BLINKER_CMD_ON) {
    //digitalWrite(LED_BUILTIN, LOW);
    SET_RGB(255, 255, 255, 255);
    BlinkerMIOT.powerState("on");
    BlinkerMIOT.print();
  }
  else if (state == BLINKER_CMD_OFF) {
    //digitalWrite(LED_BUILTIN, HIGH);
    SET_RGB(255, 255, 255, 0);
    BlinkerMIOT.powerState("off");
    BlinkerMIOT.print();
  }
}

//小爱设置颜色回调
void miotColor(int32_t color)
{
  BLINKER_LOG("need set color: ", color);
  int colorR, colorG, colorB;
  colorR = color >> 16 & 0xFF;
  colorG = color >>  8 & 0xFF;
  colorB = color       & 0xFF;

  BLINKER_LOG("colorR: ", colorR, ", colorG: ", colorG, ", colorB: ", colorB);
  SET_RGB(colorR, colorG, colorB, LED_Bright);
  //pixelShow();

  BlinkerMIOT.color(color);//反馈小爱控制状态
  BlinkerMIOT.print();
}
//小爱调亮度回调
void miotBright(const String & bright)
{
  BLINKER_LOG("need set brightness: ", bright);

  int colorW = bright.toInt();

  BLINKER_LOG("now set brightness: ", colorW);
  LED_Bright = (int)(1.8*colorW);
//  if (LED_Bright >= 80 && LED_Bright <= 100) {
//    SET_RGB(255, 255, 255, 255);
//  } else if (LED_Bright >= 40 && LED_Bright <= 79) {
//    SET_RGB(125, 125, 125, 125);
//  } else if (LED_Bright >= 1 && LED_Bright <= 39) {
//    SET_RGB(50, 50, 50, 50);
//  }
  SET_LED_Brightness(LED_Bright);
  Serial.printf("亮度调节中...%d", colorW);

  BlinkerMIOT.brightness(colorW);//反馈小爱控制状态
  BlinkerMIOT.print();
}

//小爱模式回调
void miotMode(uint8_t mode)
{
    BLINKER_LOG("need set mode: ", mode);

    if (mode == BLINKER_CMD_MIOT_DAY) {//日光模式
        // Your mode function
    }
    else if (mode == BLINKER_CMD_MIOT_NIGHT) {//夜光模式
        colorWipe(pixels.Color(255, 0, 0), 50);
    }
    else if (mode == BLINKER_CMD_MIOT_COLOR) {//彩光模式
        rainbow(50);
    }
    else if (mode == BLINKER_CMD_MIOT_WARMTH) {//温馨模式
        colorWipe(pixels.Color(255,255, 255), 50);
    }
    else if (mode == BLINKER_CMD_MIOT_TV) {//电视模式
        rainbowCycle(20);
    }
    else if (mode == BLINKER_CMD_MIOT_READING) {//阅读模式
        colorWipe(pixels.Color(255,255, 255), 50);
    }
    else if (mode == BLINKER_CMD_MIOT_COMPUTER) {//电脑模式
        rainbow(80);
    }

    wsMode = mode;

    BlinkerMIOT.mode(mode);
    BlinkerMIOT.print();
}
//小爱色温，色温范围为1000-10000
void miotColoTemp(int32_t colorTemp)
{
    BLINKER_LOG("need set colorTemperature: ", colorTemp);

    colorT = colorTemp;

    BlinkerMIOT.colorTemp(colorTemp);
    BlinkerMIOT.print();
}


void STM32_control(void){
 int j = 0;
  while (Serial.available() > 0)
  {
    comdata += char(Serial.read());
    delay(2);
  }
  if(comdata.length() > 0)
  {
//      if(comdata[0] == '1'&& comdata.length()==3){  //如果串口收到字符“1”则设置wifi

//      comdata = String("");  //清除
//      }else{
       for(int i = 0; i < comdata.length() ; i++)
        {
          if(comdata[i] == ','||comdata[i] == '\n')
          {
            j++;
          }
          else
          {
             numdata[j] = numdata[j] * 10 + (comdata[i] - '0');
          } 
        }
        comdata = String("");//清空缓存
        switch (numdata[0]) { 
          case 0:pixels.setBrightness(0);pixels.show();break; //关
          case 1:SET_RGB(numdata[1],numdata[2],numdata[3],numdata[4]);break; //设置RGB及亮度值 
          case 2:SET_RGB(255, 255, 255, 80);pixels.show();break ;//开
          case 3:pixels.clear();pixels.show();break;//清除颜色
          case 4:SET_LED_Brightness(numdata[1]);break;//设置亮度
          case 5:rainbow(20);break;
          case 6:rainbowCycle(20);break;
          case 7:theaterChaseRainbow(50);break;
          case 8:colorWipe(pixels.Color(255, 0, 0), 50); // Red
                 colorWipe(pixels.Color(0, 255, 0), 50); // Green
                 colorWipe(pixels.Color(0, 0, 255), 50); // Blue
                 break;
          case 9:
                 theaterChase(pixels.Color(127, 0, 0), 50); // Red
                 theaterChase(pixels.Color(0, 0, 127), 50); // Blue
                 theaterChase(pixels.Color(127, 127, 127), 50); // White
                  break;
          case 10:theaterChaseRainbow(50);WIFI_Set();Blinker.begin(auth, WiFi.SSID().c_str(), WiFi.psk().c_str());break;
          default:break;
          }
      for(int i = 0; i <= 10 ; i++)//清空接收到的数据
        {
          Serial.println(numdata[i]);
          numdata[i]=0;
         }
        
     }
}


void setup() {
    // 初始化串口
    pinMode(LED_BUILTIN, OUTPUT);
    pixels.begin();//WS2812初始化

    Serial.begin(115200);
    

    
    #if defined(BLINKER_PRINT)
        BLINKER_DEBUG.stream(BLINKER_PRINT);
    #endif

    RGB1.attach(rgb1_callback);//注册调节颜色的回调函数
    LED_Brightness.attach(LED_Brightness_callback);//注册调节亮度的回调函数


    BlinkerMIOT.attachPowerState(miotPowerState);//小爱开关
    BlinkerMIOT.attachColor(miotColor);//小爱调节颜色
    BlinkerMIOT.attachBrightness(miotBright);//小爱调节RGB亮度
    BlinkerMIOT.attachMode(miotMode);//小爱屏幕挂灯模式
    BlinkerMIOT.attachColorTemperature(miotColoTemp);//小爱色温模式
    delay(100); 
    pixels.clear();
    SET_RGB(0,0,0,180);     
    pixels.show();
    delay(1000);
}

void loop() {
 STM32_control();
 Blinker.run();
}


//RGB
// Fill the dots one after the other with a color
void colorWipe(uint32_t c, uint8_t wait) {
  for(uint16_t i=0; i<pixels.numPixels(); i++) {
    pixels.setPixelColor(i, c);
    pixels.show();
    delay(wait);
  }
}

void rainbow(uint8_t wait) {
  uint16_t i, j;

  for(j=0; j<256; j++) {
    for(i=0; i<pixels.numPixels(); i++) {
      pixels.setPixelColor(i, Wheel((i+j) & 255));
    }
    pixels.show();
    delay(wait);
  }
}

// Slightly different, this makes the rainbow equally distributed throughout
void rainbowCycle(uint8_t wait) {
  uint16_t i, j;

  for(j=0; j<256*5; j++) { // 5 cycles of all colors on wheel
    for(i=0; i< pixels.numPixels(); i++) {
      pixels.setPixelColor(i, Wheel(((i * 256 / pixels.numPixels()) + j) & 255));
    }
    pixels.show();
    delay(wait);
  }
}

//Theatre-style crawling lights.
void theaterChase(uint32_t c, uint8_t wait) {
  for (int j=0; j<10; j++) {  //do 10 cycles of chasing
    for (int q=0; q < 3; q++) {
      for (uint16_t i=0; i < pixels.numPixels(); i=i+3) {
        pixels.setPixelColor(i+q, c);    //turn every third pixel on
      }
      pixels.show();

      delay(wait);

      for (uint16_t i=0; i < pixels.numPixels(); i=i+3) {
        pixels.setPixelColor(i+q, 0);        //turn every third pixel off
      }
    }
  }
}

//Theatre-style crawling lights with rainbow effect
void theaterChaseRainbow(uint8_t wait) {
  for (int j=0; j < 256; j++) {     // cycle all 256 colors in the wheel
    for (int q=0; q < 3; q++) {
      for (uint16_t i=0; i < pixels.numPixels(); i=i+3) {
        pixels.setPixelColor(i+q, Wheel( (i+j) % 255));    //turn every third pixel on
      }
      pixels.show();

      delay(wait);

      for (uint16_t i=0; i < pixels.numPixels(); i=i+3) {
        pixels.setPixelColor(i+q, 0);        //turn every third pixel off
      }
    }
  }
}

// Input a value 0 to 255 to get a color value.
// The colours are a transition r - g - b - back to r.
uint32_t Wheel(byte WheelPos) {
  WheelPos = 255 - WheelPos;
  if(WheelPos < 85) {
    return pixels.Color(255 - WheelPos * 3, 0, WheelPos * 3);
  }
  if(WheelPos < 170) {
    WheelPos -= 85;
    return pixels.Color(0, WheelPos * 3, 255 - WheelPos * 3);
  }
  WheelPos -= 170;
  return pixels.Color(WheelPos * 3, 255 - WheelPos * 3, 0);
}
