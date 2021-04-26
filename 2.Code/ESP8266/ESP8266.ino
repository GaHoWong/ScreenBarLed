#define BLINKER_PRINT Serial
#define BLINKER_MIOT_LIGHT
#define BLINKER_WIFI
#include <Blinker.h>
#include <Adafruit_NeoPixel.h>


#define LED   2  // 板子上的灯 
#define PIN 2  //  DIN PIN (GPIO15, D8)
#define NUMPIXELS 3  // Number of you led
Adafruit_NeoPixel strip = Adafruit_NeoPixel(3, PIN, NEO_GRB + NEO_KHZ800);

String comdata = "";//定义接收的字符buff
int numdata[10] = {0};

char auth[] = "80ec0fe22c73";/****秘钥****/
Adafruit_NeoPixel pixels = Adafruit_NeoPixel(NUMPIXELS, PIN, NEO_GRB + NEO_KHZ800);


// 新建组件对象
BlinkerRGB RGB1("RGB");
BlinkerSlider Color_temperature ("temp");



int LED_R=0,LED_G=0,LED_B=0,LED_Bright=180;// RGB和亮度
bool WIFI_Status = true;
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


void SET_Color_temperature(int bright)
{
    for (uint16_t i = 0; i < NUMPIXELS; i++) //把灯条变色
    {
        pixels.setPixelColor(i,255,255,255);
    }
    pixels.setBrightness(bright);//亮度
    pixels.show();    //送出显示
}
//APP RGB颜色设置回调
void Color_temperature_callback(int bright_value)
{
    BLINKER_LOG("Rrightness value: ", bright_value);
    LED_Bright = bright_value;
    SET_Color_temperature(LED_Bright);
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
          case 0:pixels.setBrightness(0);pixels.show();break; //设置RGB及亮度值 
          case 1:SET_RGB(numdata[1],numdata[2],numdata[3],numdata[4]);break; //设置RGB及亮度值 
          case 2:SET_RGB(numdata[1],numdata[2],numdata[3],numdata[4]);break; //设置RGB及亮度值   
          case 3:pixels.clear();pixels.show();break;//清除颜色
          case 4:pixels.setBrightness(numdata[1]);pixels.show();break;//设置亮度
          case 5:rainbow(20);break;
          case 6:rainbowCycle(20);break;
          case 7:theaterChaseRainbow(50);break;
          case 8:colorWipe(strip.Color(255, 0, 0), 50); // Red
                 colorWipe(strip.Color(0, 255, 0), 50); // Green
                 colorWipe(strip.Color(0, 0, 255), 50); // Blue
                 break;
          case 9:theaterChase(strip.Color(127, 127, 127), 50); // White
                 theaterChase(strip.Color(127, 0, 0), 50); // Red
                 theaterChase(strip.Color(0, 0, 127), 50); // Blue
                  break;
          case 10:WIFI_Set();Blinker.begin(auth, WiFi.SSID().c_str(), WiFi.psk().c_str());break;
          default:break;
          }
      for(int i = 0; i <= comdata.length() ; i++)//清空接收到的数据
        {
          Serial.println(numdata[i]);
          numdata[i]=0;
         }
        
     }
}


void setup() {
    // 初始化串口
    Serial.begin(115200);
    
    pixels.begin();//WS2812初始化
    pixels.show();
    pinMode(LED_BUILTIN, OUTPUT);
    #if defined(BLINKER_PRINT)
        BLINKER_DEBUG.stream(BLINKER_PRINT);
    #endif

    RGB1.attach(rgb1_callback);//注册调节颜色的回调函数
    Color_temperature.attach(Color_temperature_callback);//注册调节颜色的回调函数
    
}

void loop() {
 STM32_control();
 Blinker.run();
}


//RGB
// Fill the dots one after the other with a color
void colorWipe(uint32_t c, uint8_t wait) {
  for(uint16_t i=0; i<strip.numPixels(); i++) {
    strip.setPixelColor(i, c);
    strip.show();
    delay(wait);
  }
}

void rainbow(uint8_t wait) {
  uint16_t i, j;

  for(j=0; j<256; j++) {
    for(i=0; i<strip.numPixels(); i++) {
      strip.setPixelColor(i, Wheel((i+j) & 255));
    }
    strip.show();
    delay(wait);
  }
}

// Slightly different, this makes the rainbow equally distributed throughout
void rainbowCycle(uint8_t wait) {
  uint16_t i, j;

  for(j=0; j<256*5; j++) { // 5 cycles of all colors on wheel
    for(i=0; i< strip.numPixels(); i++) {
      strip.setPixelColor(i, Wheel(((i * 256 / strip.numPixels()) + j) & 255));
    }
    strip.show();
    delay(wait);
  }
}

//Theatre-style crawling lights.
void theaterChase(uint32_t c, uint8_t wait) {
  for (int j=0; j<10; j++) {  //do 10 cycles of chasing
    for (int q=0; q < 3; q++) {
      for (uint16_t i=0; i < strip.numPixels(); i=i+3) {
        strip.setPixelColor(i+q, c);    //turn every third pixel on
      }
      strip.show();

      delay(wait);

      for (uint16_t i=0; i < strip.numPixels(); i=i+3) {
        strip.setPixelColor(i+q, 0);        //turn every third pixel off
      }
    }
  }
}

//Theatre-style crawling lights with rainbow effect
void theaterChaseRainbow(uint8_t wait) {
  for (int j=0; j < 256; j++) {     // cycle all 256 colors in the wheel
    for (int q=0; q < 3; q++) {
      for (uint16_t i=0; i < strip.numPixels(); i=i+3) {
        strip.setPixelColor(i+q, Wheel( (i+j) % 255));    //turn every third pixel on
      }
      strip.show();

      delay(wait);

      for (uint16_t i=0; i < strip.numPixels(); i=i+3) {
        strip.setPixelColor(i+q, 0);        //turn every third pixel off
      }
    }
  }
}

// Input a value 0 to 255 to get a color value.
// The colours are a transition r - g - b - back to r.
uint32_t Wheel(byte WheelPos) {
  WheelPos = 255 - WheelPos;
  if(WheelPos < 85) {
    return strip.Color(255 - WheelPos * 3, 0, WheelPos * 3);
  }
  if(WheelPos < 170) {
    WheelPos -= 85;
    return strip.Color(0, WheelPos * 3, 255 - WheelPos * 3);
  }
  WheelPos -= 170;
  return strip.Color(WheelPos * 3, 255 - WheelPos * 3, 0);
}
