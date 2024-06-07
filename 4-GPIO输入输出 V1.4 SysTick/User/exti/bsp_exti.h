#ifndef __EXTI_H
#define	__EXTI_H


#include "stm32f10x.h"


//NVIC宏定义
#define KEY1_INT_EXTI_IRQ          EXTI0_IRQn
#define KEY2_INT_EXTI_IRQ          EXTI15_10_IRQn   //GPIO 引脚10到15的中断


//EXTI 宏定义 KEY1 
#define KEY1_INT_GPIO_CLK          (RCC_APB2Periph_GPIOA|RCC_APB2Periph_AFIO) // AFIO 的外部中断控制寄存器 AFIO_EXTICRx

#define KEY1_INT_GPIO_PORT         GPIOA
#define KEY1_INT_GPIO_PIN          GPIO_Pin_0

#define KEY1_INT_EXTI_PORTSOURCE   GPIO_PortSourceGPIOA  //表示外部中断将连接到GPIOA端口
#define KEY1_INT_EXTI_PINSOURCE    GPIO_PinSource0				//表示外部中断将连接到GPIOA端口的第0号引脚

#define KEY1_INT_EXTI_LINE         EXTI_Line0    				//设置外部中断线

#define KEY1_IRQHandler            EXTI0_IRQHandler

///-----------////

//EXTI 宏定义 KEY2 
#define KEY2_INT_GPIO_CLK          (RCC_APB2Periph_GPIOC|RCC_APB2Periph_AFIO)

#define KEY2_INT_GPIO_PORT         GPIOC
#define KEY2_INT_GPIO_PIN          GPIO_Pin_13

#define KEY2_INT_EXTI_PORTSOURCE   GPIO_PortSourceGPIOC
#define KEY2_INT_EXTI_PINSOURCE    GPIO_PinSource13
#define KEY2_INT_EXTI_LINE         EXTI_Line13

#define KEY2_IRQHandler            EXTI15_10_IRQHandler

///-----------////

void EXTI_Key_Config(void);
void NVIC_Configuration(void);


#endif /* __EXTI_H */
