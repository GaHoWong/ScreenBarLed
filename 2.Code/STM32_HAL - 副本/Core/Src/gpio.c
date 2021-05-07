/**
  ******************************************************************************
  * File Name          : gpio.c
  * Description        : This file provides code for the configuration
  *                      of all used GPIO pins.
  ******************************************************************************
  * @attention
  *
  * <h2><center>&copy; Copyright (c) 2021 STMicroelectronics.
  * All rights reserved.</center></h2>
  *
  * This software component is licensed by ST under BSD 3-Clause license,
  * the "License"; You may not use this file except in compliance with the
  * License. You may obtain a copy of the License at:
  *                        opensource.org/licenses/BSD-3-Clause
  *
  ******************************************************************************
  */

/* Includes ------------------------------------------------------------------*/
#include "gpio.h"
/* USER CODE BEGIN 0 */
#include "stdio.h"
/* USER CODE END 0 */

/*----------------------------------------------------------------------------*/
/* Configure GPIO                                                             */
/*----------------------------------------------------------------------------*/
/* USER CODE BEGIN 1 */
uint8_t KUP;//��ť������־��1Ϊ������
uint16_t cou;

#define KEYA_SPEED1	100	  //������ʱ�䳤�ȣ���λ10mS��
#define KEYA_SPEED2	20	  //˫����ʱ�䳤�ȣ���λ20mS��

/* USER CODE END 1 */

/** Configure pins as
        * Analog
        * Input
        * Output
        * EVENT_OUT
        * EXTI
*/
void MX_GPIO_Init(void)
{

  GPIO_InitTypeDef GPIO_InitStruct = {0};

  /* GPIO Ports Clock Enable */
  __HAL_RCC_GPIOD_CLK_ENABLE();
  __HAL_RCC_GPIOA_CLK_ENABLE();
  __HAL_RCC_GPIOB_CLK_ENABLE();

  /*Configure GPIO pin Output Level */
  HAL_GPIO_WritePin(LED1_GPIO_Port, LED1_Pin, GPIO_PIN_RESET);

  /*Configure GPIO pin : PtPin */
  GPIO_InitStruct.Pin = LED1_Pin;
  GPIO_InitStruct.Mode = GPIO_MODE_OUTPUT_PP;
  GPIO_InitStruct.Pull = GPIO_NOPULL;
  GPIO_InitStruct.Speed = GPIO_SPEED_FREQ_LOW;
  HAL_GPIO_Init(LED1_GPIO_Port, &GPIO_InitStruct);

  /*Configure GPIO pins : PBPin PBPin */
  GPIO_InitStruct.Pin = ENCODER_R_Pin|ENCODER_L_Pin;
  GPIO_InitStruct.Mode = GPIO_MODE_INPUT;
  GPIO_InitStruct.Pull = GPIO_PULLUP;
  HAL_GPIO_Init(GPIOB, &GPIO_InitStruct);

  /*Configure GPIO pin : PtPin */
  GPIO_InitStruct.Pin = Button_Pin;
  GPIO_InitStruct.Mode = GPIO_MODE_IT_FALLING;
  GPIO_InitStruct.Pull = GPIO_PULLUP;
  HAL_GPIO_Init(Button_GPIO_Port, &GPIO_InitStruct);

  /* EXTI interrupt init*/
  HAL_NVIC_SetPriority(EXTI15_10_IRQn, 0, 0);
  HAL_NVIC_EnableIRQ(EXTI15_10_IRQn);

}

/* USER CODE BEGIN 2 */
uint8_t ENCODER_READ(void){ //�ӿڳ�ʼ��
	uint8_t a = 0,b,c=0,d = 0;//��Ű�����ֵ
	uint8_t kt;
	if(HAL_GPIO_ReadPin(GPIOB,GPIO_PIN_13))KUP=0;	//�ж���ť�Ƿ�������
	if(!HAL_GPIO_ReadPin(GPIOB,GPIO_PIN_13)&&KUP==0){ //�ж��Ƿ���ת��ť��ͬʱ�ж��Ƿ�����ť����
		kt=HAL_GPIO_ReadPin(GPIOB,GPIO_PIN_2);	//����ť��һ�˵�ƽ״̬��¼
		if(!HAL_GPIO_ReadPin(GPIOB,GPIO_PIN_13)){ //ȥ��
			if(kt==0){ //����һ���ж��������ת
				a=1;//��ת
			}else{
				a=2;//��ת
			}
			cou=0; //��ʼ�����жϼ�����
			while(!HAL_GPIO_ReadPin(GPIOB,GPIO_PIN_13)&&cou<60000){ //�ȴ��ſ���ť��ͬʱ�ۼ��ж�����
				cou++;KUP=1; //
			}
		}
	}
	if(!HAL_GPIO_ReadPin(GPIOB,Button_Pin)&&KUP==0){ //�ж���ť�Ƿ���  
		HAL_Delay(130);
		if(!HAL_GPIO_ReadPin(GPIOB,Button_Pin)){ //ȥ����
			while((!HAL_GPIO_ReadPin(GPIOB,Button_Pin)) && c<KEYA_SPEED1){
			c++;HAL_Delay(10); //�����жϵļ�ʱ
			}
			if(c>=KEYA_SPEED1){ //��������
					//������ִ�еĳ���ŵ��˴�
					
					a = 5;
					while(!HAL_GPIO_ReadPin(GPIOB,Button_Pin));
				}else{ //��������
					for(b=0;b<KEYA_SPEED2;b++){//���˫��
						HAL_Delay(20);
						if(!HAL_GPIO_ReadPin(GPIOB,Button_Pin)){
							d=1;
							//˫����ִ�еĳ���ŵ��˴�
							
							a = 4;
							while(!HAL_GPIO_ReadPin(GPIOB,Button_Pin));
						}
					}
					if(d==0){ //�жϵ���
						//������ִ�еĳ���ŵ��˴�
						a=3;//�ڰ�������ʱ���ϰ�����״ֵ̬
						
					}
				}
				d=0;c=0; //������0
		}
	}//�����ж��ڴ˽���

	return a;
} 

int Infrared_READ(void){
  if(HAL_GPIO_ReadPin(GPIOA,GPIO_PIN_6)){
		printf("hw1");
   // return 1; //�����ߵ�ƽ�ͷ���1
		}
  else {
		printf("hw0");
    //return 0; //���򷵻�0
	}
}


/* USER CODE END 2 */

/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/
