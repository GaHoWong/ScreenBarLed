#include "sys.h"
#include "delay.h"
#include "adc.h"
#include "key.h"
#include "tim.h"
#include "ws2812b.h"
extern vu16 ADC_DMA_IN[2]; //声明外部变量

void Init(void)
{
	delay_ms(500);         //上电时等待其他器件就绪
	RCC_Configuration();   //系统时钟初始化 
	ADC_Configuration();   //ADC初始化
	KEY_Init();            //按键初始化
	WS281x_Init();				 //WS2812B初始化
}


int main (void){
	
	WS281x_Color(12,213,5);
	while(1){
		WS281x_Show();
	}
}



