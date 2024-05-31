/**
  ******************************************************************************
  实现功能：
  1.点亮LED  2.按键输入 3.翻转LED
	4.RCC
	------
	1-初始化EXTI中断，按下按键会触发中断，
	2-触发中断会进入stm32f4xx_it.c文件中的函数
	3-KEY1_IRQHandler和KEY2_IRQHandler，处理中断，反转LED灯
  *
  ******************************************************************************
  */ 
	
	

#include "stm32f10x.h"
#include "stm32f10x_rcc.h"
#include "bsp_led.h"
#include "bsp_key.h"
#include "bsp_rcc.h"
#include "bsp_exti.h"


void delay_ms(u16 time);

int LED_Log = 0; // 定义LED_Log为一个全局变量
RCC_ClocksTypeDef get_rcc_clock;

int main(void)
{
    //初始化
    LED_GPIO_Config();
    //KEY_GPIO_Config();
	
		//中断初始化
	  NVIC_Configuration();
		EXTI_Key_Config(); 
	
	
		//时钟相关
		HSE_SetSysClock(RCC_PLLMul_9);
    RCC_GetClocksFreq(&get_rcc_clock);    //获取时钟频率	
	

    while (1)
    {
			
			
			
//        #if 0
//        if (Key_Scan(KEY1_GPIO_PORT, KEY1_GPIO_PIN) == 1)
//        {
//            if (LED_Log == 1)
//            {
//                //GPIO_ResetBits(LED1_GPIO_PORT, LED1_GPIO_PIN);
//							LED_GREEN;
//                LED_Log = 0;
//            }
//            else
//            {
//                //GPIO_SetBits(LED1_GPIO_PORT, LED1_GPIO_PIN);
//							LED_RGBOFF;
//                LED_Log = 1;
//            }
//        }
//        #endif
//				
//			  #if 0
//				//GPIO_ResetBits(LED1_GPIO_PORT, LED1_GPIO_PIN);
//				LED_YELLOW;
//				delay_ms(1000);
//				//GPIO_SetBits(LED1_GPIO_PORT, LED1_GPIO_PIN);
//				LED_PURPLE;
//				delay_ms(1000);
//				
//        #endif


				 }
}

void delay_ms(u16 time)
{
    u16 i = 0;
    while (time--)
    {
        i = 7200;  // 自己定义
        while (i--);
    }
}
