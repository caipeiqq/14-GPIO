/**
  ******************************************************************************
  实现功能：
	1.点亮LED  2.按键输入 3.翻转LED
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
	/* LED 端口初始化 */
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
//#define KEY1_GPIO_PORT      GPIOA                         /* GPIO端口 */
//#define KEY1_GPIO_CLK       RCC_APB2Periph_GPIOA        /* GPIO端口时钟 */
//#define KEY1_GPIO_PIN       GPIO_Pin_0                  /* 连接到SCL时钟线的GPIO */

//// Key2 PC13
//#define KEY2_GPIO_PORT      GPIOC                         /* GPIO端口 */
//#define KEY2_GPIO_CLK       RCC_APB2Periph_GPIOC        /* GPIO端口时钟 */
//#define KEY2_GPIO_PIN       GPIO_Pin_13                  /* 连接到SCL时钟线的GPIO */
		
//		uint8_t Key_Scan(GPIO_TypeDef* GPIOx,uint16_t GPIO_Pin)
//{           
//    /*检测是否有按键按下 */
//    if(GPIO_ReadInputDataBit(GPIOx,GPIO_Pin) == KEY_ON )  
//    {    
//        /*等待按键释放 */
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
      i=12000;  //自己定义
      while(i--) ;    
   }
}

//void Delay(__IO uint32_t nCount)	 //简单的延时函数
//{
//	for(; nCount != 0; nCount--);
//}
/*********************************************END OF FILE**********************/
