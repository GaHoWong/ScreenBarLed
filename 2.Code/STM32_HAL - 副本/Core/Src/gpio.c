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
uint8_t KUP;//旋钮锁死标志（1为锁死）
uint16_t cou;

#define KEYA_SPEED1	100	  //长按的时间长度（单位10mS）
#define KEYA_SPEED2	20	  //双击的时间长度（单位20mS）

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
uint8_t ENCODER_READ(void){ //接口初始化
	uint8_t a = 0,b,c=0,d = 0;//存放按键的值
	uint8_t kt;
	if(HAL_GPIO_ReadPin(GPIOB,GPIO_PIN_13))KUP=0;	//判断旋钮是否解除锁死
	if(!HAL_GPIO_ReadPin(GPIOB,GPIO_PIN_13)&&KUP==0){ //判断是否旋转旋钮，同时判断是否有旋钮锁死
		kt=HAL_GPIO_ReadPin(GPIOB,GPIO_PIN_2);	//把旋钮另一端电平状态记录
		if(!HAL_GPIO_ReadPin(GPIOB,GPIO_PIN_13)){ //去抖
			if(kt==0){ //用另一端判断左或右旋转
				a=1;//右转
			}else{
				a=2;//左转
			}
			cou=0; //初始锁死判断计数器
			while(!HAL_GPIO_ReadPin(GPIOB,GPIO_PIN_13)&&cou<60000){ //等待放开旋钮，同时累加判断锁死
				cou++;KUP=1; //
			}
		}
	}
	if(!HAL_GPIO_ReadPin(GPIOB,Button_Pin)&&KUP==0){ //判断旋钮是否按下  
		HAL_Delay(130);
		if(!HAL_GPIO_ReadPin(GPIOB,Button_Pin)){ //去抖动
			while((!HAL_GPIO_ReadPin(GPIOB,Button_Pin)) && c<KEYA_SPEED1){
			c++;HAL_Delay(10); //长按判断的计时
			}
			if(c>=KEYA_SPEED1){ //长键处理
					//长按后执行的程序放到此处
					
					a = 5;
					while(!HAL_GPIO_ReadPin(GPIOB,Button_Pin));
				}else{ //单击处理
					for(b=0;b<KEYA_SPEED2;b++){//检测双击
						HAL_Delay(20);
						if(!HAL_GPIO_ReadPin(GPIOB,Button_Pin)){
							d=1;
							//双击后执行的程序放到此处
							
							a = 4;
							while(!HAL_GPIO_ReadPin(GPIOB,Button_Pin));
						}
					}
					if(d==0){ //判断单击
						//单击后执行的程序放到此处
						a=3;//在按键按下时加上按键的状态值
						
					}
				}
				d=0;c=0; //参数清0
		}
	}//按键判断在此结束

	return a;
} 

int Infrared_READ(void){
  if(HAL_GPIO_ReadPin(GPIOA,GPIO_PIN_6)){
		printf("hw1");
   // return 1; //读到高电平就返回1
		}
  else {
		printf("hw0");
    //return 0; //否则返回0
	}
}


/* USER CODE END 2 */

/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/
