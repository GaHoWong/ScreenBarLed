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
	WS281x_Init();				 //WS2812B��ʼ��
}


int main (void){
	
	WS281x_Color(12,213,5);
	while(1){
		WS281x_Show();
	}
}



