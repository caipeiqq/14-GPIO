/**
  ******************************************************************************
  ʵ�ֹ��ܣ�
  1.����LED  2.�������� 3.��תLED
	4.RCC
	------
	1-��ʼ��EXTI�жϣ����°����ᴥ���жϣ�
	2-�����жϻ����stm32f4xx_it.c�ļ��еĺ���
	3-KEY1_IRQHandler��KEY2_IRQHandler�������жϣ���תLED��
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

int LED_Log = 0; // ����LED_LogΪһ��ȫ�ֱ���
RCC_ClocksTypeDef get_rcc_clock;

int main(void)
{
    //��ʼ��
    LED_GPIO_Config();
    //KEY_GPIO_Config();
	
		//�жϳ�ʼ��
	  NVIC_Configuration();
		EXTI_Key_Config(); 
	
	
		//ʱ�����
		HSE_SetSysClock(RCC_PLLMul_9);
    RCC_GetClocksFreq(&get_rcc_clock);    //��ȡʱ��Ƶ��	
	

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
        i = 7200;  // �Լ�����
        while (i--);
    }
}
