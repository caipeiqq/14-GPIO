/**
  ******************************************************************************
  ʵ�ֹ��ܣ�
	1.����LED  2.�������� 3.��תLED
  *
  ******************************************************************************
  */ 
	
#include "stm32f10x.h"
#include "bsp_led.h"
#include "bsp_key.h"

//#define SOFT_DELAY Delay(0x0FFFFF);
void delay_ms(u16 time);

//void Delay(__IO u32 nCount); 

int main(void)
{	
	/* LED �˿ڳ�ʼ�� */
	LED_GPIO_Config();	 
	KEY_GPIO_Config();	 	

//	GPIO_SetBits(LED1_GPIO_PORT, LED1_GPIO_PIN);

	while (1)
	{   
			
			if(Key_Scan(KEY1_GPIO_PORT,KEY1_GPIO_PIN)==1){				
					GPIO_ResetBits(LED1_GPIO_PORT, LED1_GPIO_PIN);	
					delay_ms(1000);					
			}
			else{				
					GPIO_SetBits(LED1_GPIO_PORT, LED1_GPIO_PIN);	
					delay_ms(1000);					
			}

		
		
//		// Key1 PA0
//#define KEY1_GPIO_PORT      GPIOA                         /* GPIO�˿� */
//#define KEY1_GPIO_CLK       RCC_APB2Periph_GPIOA        /* GPIO�˿�ʱ�� */
//#define KEY1_GPIO_PIN       GPIO_Pin_0                  /* ���ӵ�SCLʱ���ߵ�GPIO */

//// Key2 PC13
//#define KEY2_GPIO_PORT      GPIOC                         /* GPIO�˿� */
//#define KEY2_GPIO_CLK       RCC_APB2Periph_GPIOC        /* GPIO�˿�ʱ�� */
//#define KEY2_GPIO_PIN       GPIO_Pin_13                  /* ���ӵ�SCLʱ���ߵ�GPIO */
		
//		uint8_t Key_Scan(GPIO_TypeDef* GPIOx,uint16_t GPIO_Pin)
//{           
//    /*����Ƿ��а������� */
//    if(GPIO_ReadInputDataBit(GPIOx,GPIO_Pin) == KEY_ON )  
//    {    
//        /*�ȴ������ͷ� */
//        while(GPIO_ReadInputDataBit(GPIOx,GPIO_Pin) == KEY_ON );   
//        return  1;  
//    }
//    else
//        return 0;
//}
		
	}
}

void delay_ms(u16 time)
{    
   u16 i=0;  
   while(time--)
   {
      i=12000;  //�Լ�����
      while(i--) ;    
   }
}

//void Delay(__IO uint32_t nCount)	 //�򵥵���ʱ����
//{
//	for(; nCount != 0; nCount--);
//}
/*********************************************END OF FILE**********************/
