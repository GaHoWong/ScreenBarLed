#include "sys.h"
#include "delay.h"
#include "adc.h"
#include "key.h"
#include "tim.h"
#include "ws2812b.h"
extern vu16 ADC_DMA_IN[2]; //�����ⲿ����

void Init(void)
{
	delay_ms(500);         //�ϵ�ʱ�ȴ�������������
	RCC_Configuration();   //ϵͳʱ�ӳ�ʼ�� 
	ADC_Configuration();   //ADC��ʼ��
	KEY_Init();            //������ʼ��
	ws281x_init();				 //WS2812B��ʼ��
}


int main (void){
	Init();
  while(1)
  {
     // Some example procedures showing how to display to the pixels:
//  ws281x_colorWipe(ws281x_color(255, 0, 0), 50); // Red
//  ws281x_colorWipe(ws281x_color(0, 255, 0), 50); // Green
    ws281x_colorWipe(ws281x_color(0, 0, 255), 50); // Blue
		ws281x_colorWipe(ws281x_color(127, 127, 127), 100); // Blue
//colorWipe(strip.Color(0, 0, 0, 255), 50); // White RGBW
  // Send a theater pixel chase in...
 // ws281x_theaterChase(ws281x_color(127, 127, 127), 100); // White
//  ws281x_theaterChase(ws281x_color(127, 0, 0), 50); // Red
//  ws281x_theaterChase(ws281x_color(0, 0, 127), 50); // Blue

  //ws281x_rainbow(20);
//  ws281x_rainbowCycle(20);
//  ws281x_theaterChaseRainbow(200);
//    
//    for(i = 0; i < PIXEL_NUM; ++i)
//  {
//    ws281x_setPixelColor(i, ColorHSV(120,200,235));
//    ws281x_show();
//    delay_ms(100);
//  }
  }
}



