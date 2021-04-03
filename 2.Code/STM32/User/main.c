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

extern vu16 ADC_DMA_IN[2]; //�����ⲿ����

void Init(void)
{
	delay_ms(500);         //�ϵ�ʱ�ȴ�������������
	RCC_Configuration();   //ϵͳʱ�ӳ�ʼ�� 
	ADC_Configuration();   //ADC��ʼ��
	KEY_Init();            //������ʼ��
	WS2812B_Init();				 //WS2812B��ʼ��
	TIM3_SetIRQHandler(MainLoop);//TIM3�жϳ�ʼ��
	TIM3_Init();                 //TIM3�жϳ�ʼ��
}


int main (void){

	while(1){
		delay_ms(500); //��ʱ
	}
}



