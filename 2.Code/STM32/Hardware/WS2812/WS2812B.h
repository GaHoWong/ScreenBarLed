#ifndef __WS2812B_H 
#define __WS2812B_H 

//#include "sys.h"
#include "delay.h"
#include "stm32f10x.h"

#define PIXEL_NUM  16//16
#define GRB  60         //���������

#define WS_HIGH 45   //��ֵռ�ձ�Ϊ45������1���ʱ��Ҫ����ֵռ�ձ�Ϊ30������0���ʱ��Ҫ��
#define WS_LOW  30

void WS281x_Init(void);
void WS281x_CloseAll(void);
uint32_t WS281x_Color(uint8_t red, uint8_t green, uint8_t blue);
void WS281x_SetPixelColor(uint16_t n, uint32_t GRBColor);
void WS281x_SetPixelRGB(uint16_t n ,uint8_t red, uint8_t green, uint8_t blue);
void WS281x_Show(void);

void WS281x_RainbowCycle(uint8_t wait);
void WS281x_TheaterChase(uint32_t c, uint8_t wait);
void WS281x_ColorWipe(uint32_t c, uint8_t wait);
void WS281x_Rainbow(uint8_t wait);
void WS281x_TheaterChaseRainbow(uint8_t wait);
#endif 








