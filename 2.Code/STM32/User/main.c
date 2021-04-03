#include "sys.h"
#include "delay.h"
#include "adc.h"

extern vu16 ADC_DMA_IN[2]; //声明外部变量

int main (void){
	delay_ms(500);         //上电时等待其他器件就绪
	RCC_Configuration();   //系统时钟初始化 
	ADC_Configuration();   //ADC初始化设置


	while(1){

		delay_ms(500); //延时
	}
}



