/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.c
  * @brief          : Main program body
  ******************************************************************************
  * @attention
  *
  * <h2><center>&copy; Copyright (c) 2020 STMicroelectronics.
  * All rights reserved.</center></h2>
  *
  * This software component is licensed by ST under BSD 3-Clause license,
  * the "License"; You may not use this file except in compliance with the
  * License. You may obtain a copy of the License at:
  *                        opensource.org/licenses/BSD-3-Clause
  *
  ******************************************************************************
  */
/* USER CODE END Header */

/* Includes ------------------------------------------------------------------*/
#include "main.h"
#include "dma.h"
#include "spi.h"
#include "tim.h"
#include "usart.h"
#include "gpio.h"

/* Private includes ----------------------------------------------------------*/
/* USER CODE BEGIN Includes */
#include <stdlib.h>
#include "ws2812b.h"
#include "ws2812b_fx.h"
//#include "usb_parsing.h"
#include "sys.h"
#include "delay.h"
#include "usart.h"
#include <stdio.h>
#include <string.h>
/* USER CODE END Includes */

/* Private typedef -----------------------------------------------------------*/
/* USER CODE BEGIN PTD */
uint8_t uart3_RxBuffer[30];

/* USER CODE END PTD */

/* Private define ------------------------------------------------------------*/
/* USER CODE BEGIN PD */
int H;
int S;
int V;//H:0~180  S:0~255 V:0~255
int R=255,G=255,B=255;



	int data = 0;
	int LED = 0;   
	int MODE = 2;   
	int POWER = 1;
	
	int data_FLAG = 2;
	int LED_FLAG = 1;
	int MODE_FLAG = 0;
	int POWER_FLAG = 1;

/* USER CODE END PD */

/* Private macro -------------------------------------------------------------*/
/* USER CODE BEGIN PM */

/* USER CODE END PM */

/* Private variables ---------------------------------------------------------*/

/* USER CODE BEGIN PV */

/* USER CODE END PV */

/* Private function prototypes -----------------------------------------------*/
void SystemClock_Config(void);
/* USER CODE BEGIN PFP */

/* USER CODE END PFP */

/* Private user code ---------------------------------------------------------*/
/* USER CODE BEGIN 0 */
int TODO(int mode,int data);//执行函数
int switch1(int num);

/* USER CODE END 0 */

/**
  * @brief  The application entry point.
  * @retval int
  */
int main(void)
{
  /* USER CODE BEGIN 1 */
	uint32_t ADC1_DMA_IN[1];
	float voltage;
  int h = 0;
	int Button_Flag=0;
	int R=255,G=255,B=255;
	
	H=255;
	S = 0;
	V = 100;

	data =100;
	
//	u8 b=0,c=0x01,push=0;
  /* USER CODE END 1 */

  /* MCU Configuration--------------------------------------------------------*/

  /* Reset of all peripherals, Initializes the Flash interface and the Systick. */
  HAL_Init();

  /* USER CODE BEGIN Init */

  /* USER CODE END Init */

  /* Configure the system clock */
  SystemClock_Config();

  /* USER CODE BEGIN SysInit */

  /* USER CODE END SysInit */

  /* Initialize all configured peripherals */
  MX_GPIO_Init();
  MX_DMA_Init();
  MX_SPI1_Init();
  MX_USART1_UART_Init();
  MX_TIM2_Init();
  MX_USART2_UART_Init();
  MX_USART3_UART_Init();
  /* USER CODE BEGIN 2 */
	HAL_UART_Receive_IT(&huart3,uart3_RxBuffer,10);//使能蓝牙串口接收
  WS2812B_Init(&hspi1);

  WS2812BFX_Init(1);	// Start 3 segments

    WS2812BFX_SetSpeed(0, 50000);	      // Speed of segment 0
//  WS2812BFX_SetSpeed(1, 2000);	      // Speed of segment 1
//  WS2812BFX_SetSpeed(2, 500);	        // Speed of segment 2
 //   WS2812BFX_SetColorRGB(0, 32,0,64);	// Set color 0
    WS2812BFX_SetColorRGB(0, 255,255,255);
    WS2812BFX_SetColorHSV(0,H,S,V);
//  WS2812BFX_SetColorRGB(1, 32,0,0);		// Set color 1
//  WS2812BFX_SetColorRGB(2, 0,64,0);		// Set color 2
   // WS2812BFX_SetMode(0, FX_MODE_WHITE_TO_COLOR);	// Set mode segment 0

//  WS2812BFX_SetColorRGB(0, 16,64,0);
//  WS2812BFX_SetColorRGB(1, 0,32,64);
//  WS2812BFX_SetColorRGB(2, 64,0,0);
    WS2812BFX_SetMode(0, FX_MODE_STATIC);	// Set mode segment 1

//  WS2812BFX_SetColorRGB(0, 16,64,0);
//  WS2812BFX_SetColorRGB(1, 0,32,64);
//  WS2812BFX_SetColorRGB(2, 64,0,0);
//  WS2812BFX_SetMode(2, FX_MODE_COLOR_WIPE); 	// Set mode segment 2

  HAL_Delay(2000);

  WS2812BFX_Start(0);	// Start segment 0
//  WS2812BFX_Start(1);	// Start segment 1
//  WS2812BFX_Start(2);	// Start segment 2
//

    printf("2,");
//  HAL_GPIO_WritePin(GPIOB, LED1_Pin, GPIO_PIN_SET);//led test
//  HAL_Delay(200);
int num=0, hw=1,gm=0;


  /* USER CODE END 2 */

  /* Infinite loop */
  /* USER CODE BEGIN WHILE */
	


while(1){
	
		if((USART3_RX_STA&0x3FFF)>0){ 
		//printf("recrived: %s\r\n",USART3_RX_BUF);
//		num=atoi(&USART3_RX_BUF[2]);
//		printf("atoi: %d\r\n",num);
   //printf("USART3_RX_BUF[0]: %c\r\n",USART3_RX_BUF[0]);
		
		num = atoi(&USART3_RX_BUF);
	//	printf("num=%d\r\n",num);
		memset(USART3_RX_BUF,0,sizeof(USART3_RX_BUF));
		USART3_RX_STA=0;
		switch(num){
		case 1:MODE = 6;break;
		case 2:MODE = 7;break;
		case 3:printf("2,");break;
		case 4:printf("0,");break;
		case 5:{
			V+=10;
		  if(V>180){V=180;}
			WS2812BFX_SetMode(0, FX_MODE_STATIC);
			WS2812BFX_SetColorHSV(0,H,S,V);
			WS2812BFX_Start(0);
			break;}
		case 6:{
			V-=10;
			if(V<11){V=10;}
			WS2812BFX_SetMode(0, FX_MODE_STATIC);
			WS2812BFX_SetColorHSV(0,H,S,V);
			WS2812BFX_Start(0);
			break;}
		case 7:{  B +=10;
		if(B>200){B=200;}
	  WS2812BFX_SetMode(0, FX_MODE_STATIC);
		WS2812BFX_SetColorRGB(0,R,G,B);
		WS2812BFX_Start(0);
		break;}
		case 8:{B -=10;
		if(B<11){B=0;}
	  WS2812BFX_SetMode(0, FX_MODE_STATIC);
		WS2812BFX_SetColorRGB(0,R,G,B);
		WS2812BFX_Start(0);
		break;}
		case 9:printf("5,");break;
		case 0:printf("10,");break;//wifi
		}
	}



/*			
		if(num==1){//开灯
//				WS2812BFX_SetMode(0, FX_MODE_STATIC);
//				WS2812BFX_SetColorHSV(0,0,0,0);
//				WS2812BFX_Start(0);
			    MODE = 6;
		    //printf("off");
			}
		else if(num==2){//关灯
//		    WS2812BFX_SetMode(0, FX_MODE_STATIC);
//				WS2812BFX_SetColorHSV(0,255,0,100);
//				WS2812BFX_Start(0);
		   // printf("on");
			    MODE = 7;
			}
		else if(num==3){printf("2,");}//LED1氛围灯开
		else if(num==4){printf("0,");}//LED1氛围灯关
		else if(num==5){MODE = 10;}
		else if(num==6){MODE = 11;}
		else if(num==7){MODE = 12;}//光敏开
		else if(num==8){MODE = 13;}//光敏关
		else if(num==9){printf("5,");}//模式一
		else if(num==10){printf("9,");}//模式二
		else if(num>10&&num<265){
			  WS2812BFX_SetMode(0, FX_MODE_STATIC);
				WS2812BFX_SetColorHSV(0,H,S,num-10);
				WS2812BFX_Start(0);
		    printf("4,%d,",num-10);
		}//亮度
		else if(num>265&&num<520){
			  WS2812BFX_SetMode(0, FX_MODE_STATIC);
				WS2812BFX_SetColorRGB(0,R,G,num-265);
				WS2812BFX_Start(0);
		    printf("1,255,255,%d,150",num-265);
		}//色温或是B值
		else if(num>520&&num<775){ //R值
			  WS2812BFX_SetMode(0, FX_MODE_STATIC);
		    WS2812BFX_SetColorRGB(0,num-520,G,B);
				WS2812BFX_Start(0);
			  //printf("R=%d\r\n",num-520);}
		}else if(num>775&&num<1030){ //R值
			  WS2812BFX_SetMode(0, FX_MODE_STATIC);
		    WS2812BFX_SetColorRGB(0,R,num-775,B);
				WS2812BFX_Start(0);
			  //printf("R=%d\r\n",num-775);
		}
	}
		*/
		

		  Button_Flag = ENCODER_READ();	//读出旋转编码器值	
			switch(Button_Flag){
				case 1:{data = data+3;if(data>252)data=255;break;} //分析按键值，并加减计数器值。
				case 2:{if(data<3)data=0;data=data-3;break;} //分析按键值，并加减计数器值。
				case 3:{//单击
					    MODE++;
					   if(MODE >4){MODE=0;}
								break;
							 }
				case 4:{//双击
					      MODE=5;
								//LED++;
								//if(LED > 1){LED = 0;}
								//printf("double push!!");
								//printf("%d",LED);
								break;
							 }
				case 5:{
								POWER++;
								if(POWER >= 2){POWER=0;}
								else if(POWER == 0){MODE = 0;}
								else if(POWER == 1){MODE = 1;}
							  //printf("long push!!");
					      //printf("%d",POWER);
								break;
							 }//长按
				default:break; //不属于判断情况
				}
			if(POWER!=POWER_FLAG || LED!=LED_FLAG || MODE!=MODE_FLAG || data!= data_FLAG){
				
			  TODO(MODE,data);//执行函数
				POWER_FLAG=POWER;
				LED_FLAG=LED;
				MODE_FLAG=MODE;
				data_FLAG= data;	
			}
			
			WS2812BFX_Callback();
	}
/*
 while(1){
 HAL_Delay(1000);
	 printf("d");
 }
*/

    /* USER CODE END WHILE */

    /* USER CODE BEGIN 3 */
  /* USER CODE END 3 */
}

/**
  * @brief System Clock Configuration
  * @retval None
  */
void SystemClock_Config(void)
{
  RCC_OscInitTypeDef RCC_OscInitStruct = {0};
  RCC_ClkInitTypeDef RCC_ClkInitStruct = {0};

  /** Initializes the CPU, AHB and APB busses clocks
  */
  RCC_OscInitStruct.OscillatorType = RCC_OSCILLATORTYPE_HSE;
  RCC_OscInitStruct.HSEState = RCC_HSE_ON;
  RCC_OscInitStruct.HSEPredivValue = RCC_HSE_PREDIV_DIV1;
  RCC_OscInitStruct.HSIState = RCC_HSI_ON;
  RCC_OscInitStruct.PLL.PLLState = RCC_PLL_ON;
  RCC_OscInitStruct.PLL.PLLSource = RCC_PLLSOURCE_HSE;
  RCC_OscInitStruct.PLL.PLLMUL = RCC_PLL_MUL6;
  if (HAL_RCC_OscConfig(&RCC_OscInitStruct) != HAL_OK)
  {
    Error_Handler();
  }
  /** Initializes the CPU, AHB and APB busses clocks
  */
  RCC_ClkInitStruct.ClockType = RCC_CLOCKTYPE_HCLK|RCC_CLOCKTYPE_SYSCLK
                              |RCC_CLOCKTYPE_PCLK1|RCC_CLOCKTYPE_PCLK2;
  RCC_ClkInitStruct.SYSCLKSource = RCC_SYSCLKSOURCE_PLLCLK;
  RCC_ClkInitStruct.AHBCLKDivider = RCC_SYSCLK_DIV1;
  RCC_ClkInitStruct.APB1CLKDivider = RCC_HCLK_DIV2;
  RCC_ClkInitStruct.APB2CLKDivider = RCC_HCLK_DIV1;

  if (HAL_RCC_ClockConfig(&RCC_ClkInitStruct, FLASH_LATENCY_1) != HAL_OK)
  {
    Error_Handler();
  }
}

/* USER CODE BEGIN 4 */

int TODO(int mode,int data){
	int m=0;
	
	switch(mode){
	case 0:{//关灯
		printf("0,");
		WS2812BFX_SetMode(0, FX_MODE_STATIC);
		WS2812BFX_SetColorHSV(0,0,0,0);
		WS2812BFX_Start(0);

	  } 
	case 1:{//开灯
		
		WS2812BFX_SetMode(0, FX_MODE_STATIC);
		WS2812BFX_SetColorHSV(0,H,S,150);
		WS2812BFX_Start(0);
		printf("2,");
		break;
	  }
	case 2:{ //亮度
		V = data;
		if(V<10){V=10;}else if(V>170){V=170;}
		WS2812BFX_SetMode(0, FX_MODE_STATIC);
		WS2812BFX_SetColorHSV(0,H,S,V);
		WS2812BFX_Start(0);
		printf("4,%d,",V); 
		break;
    }
	case 3:{
		B = data;
		if(B<5){B=0;}else if(B>200){B=200;}
	  WS2812BFX_SetMode(0, FX_MODE_STATIC);
		WS2812BFX_SetColorRGB(0,R,G,B);
		WS2812BFX_Start(0);
		printf("1,255,255,%d,100",B);
		break;
	  }
	case 4:{
			if(m>data){WS2812BFX_PrevMode(0);WS2812BFX_Start(0);}
			else{WS2812BFX_NextMode(0);WS2812BFX_Start(0);}
			m = data;
			break;
	  }
	case 5:{//连接wifi
	  printf("10,");
		break;
	}
	case 6:{//关主灯
		WS2812BFX_SetMode(0, FX_MODE_STATIC);
		WS2812BFX_SetColorHSV(0,0,0,0);
		WS2812BFX_Start(0);
		break;
	}
	case 7:{//开主灯
		WS2812BFX_SetMode(0, FX_MODE_STATIC);
		WS2812BFX_SetColorHSV(0,H,S,150);
		WS2812BFX_Start(0);
		break;
	}
	case 8:{//关屏幕挂灯
	  printf("0,");
		break;
	}
		case 9:{//开屏幕挂灯
	  printf("2,");
		break;
	}
		case 10:{//亮度自增10
	  V+=10;
		if(V>180){V=180;}
		WS2812BFX_SetMode(0, FX_MODE_STATIC);
		WS2812BFX_SetColorHSV(0,H,S,V);
		WS2812BFX_Start(0);
		break;
	}
		case 11:{//亮度自-10
	  V-=10;
		if(V<11){V=10;}
		WS2812BFX_SetMode(0, FX_MODE_STATIC);
		WS2812BFX_SetColorHSV(0,H,S,V);
		WS2812BFX_Start(0);
		break;
	}
		case 12:{
	  B +=10;
		if(B>200){B=200;}
	  WS2812BFX_SetMode(0, FX_MODE_STATIC);
		WS2812BFX_SetColorRGB(0,R,G,B);
		WS2812BFX_Start(0);
		break;
	}
		case 13:{
	  B -=10;
		if(B<11){B=0;}
	  WS2812BFX_SetMode(0, FX_MODE_STATIC);
		WS2812BFX_SetColorRGB(0,R,G,B);
		WS2812BFX_Start(0);
		break;
	}
	default:break; //不属于判断情况
}
	return 0;

}



void HAL_SYSTICK_Callback(void)
{
	WS2812BFX_SysTickCallback();	// FX effects software timers
}
/* USER CODE END 4 */

/**
  * @brief  This function is executed in case of error occurrence.
  * @retval None
  */
void Error_Handler(void)
{
  /* USER CODE BEGIN Error_Handler_Debug */
  /* User can add his own implementation to report the HAL error return state */

  /* USER CODE END Error_Handler_Debug */
}

#ifdef  USE_FULL_ASSERT
/**
  * @brief  Reports the name of the source file and the source line number
  *         where the assert_param error has occurred.
  * @param  file: pointer to the source file name
  * @param  line: assert_param error line source number
  * @retval None
  */
void assert_failed(uint8_t *file, uint32_t line)
{
  /* USER CODE BEGIN 6 */
  /* User can add his own implementation to report the file name and line number,
     tex: printf("Wrong parameters value: file %s on line %d\r\n", file, line) */
  /* USER CODE END 6 */
}
#endif /* USE_FULL_ASSERT */

/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/
