#include "sys.h"
#include "delay.h"
#include "adc.h"
#include "key.h"
#include "tim.h"

uint8_t KeyNum,MODE=1;
uint8_t UpdateFlag=1;
uint8_t WhiteLight_Brightness;
uint8_t ColorLight_Mode,ColorLight_Flag;
uint16_t ColorLight_Time;

void Close(void);
void WhiteLight(void);
void ColorLight(void);
void MainLoop(void);

extern vu16 ADC_DMA_IN[2]; //声明外部变量

void Init(void)
{
	delay_ms(500);         //上电时等待其他器件就绪
	RCC_Configuration();   //系统时钟初始化 
	ADC_Configuration();   //ADC初始化
	KEY_Init();            //按键初始化
	WS2812B_Init();				 //WS2812B初始化
	TIM3_SetIRQHandler(MainLoop);//TIM3中断初始化
	TIM3_Init();                 //TIM3中断初始化
}


int main (void){

	while(1){
		delay_ms(500); //延时
	}
}



