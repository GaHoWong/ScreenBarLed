#include "sys.h"
#include "delay.h"
#include "adc.h"

extern vu16 ADC_DMA_IN[2]; //�����ⲿ����

int main (void){
	delay_ms(500);         //�ϵ�ʱ�ȴ�������������
	RCC_Configuration();   //ϵͳʱ�ӳ�ʼ�� 
	ADC_Configuration();   //ADC��ʼ������


	while(1){

		delay_ms(500); //��ʱ
	}
}



