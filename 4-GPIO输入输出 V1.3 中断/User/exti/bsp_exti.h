#ifndef __EXTI_H
#define	__EXTI_H


#include "stm32f10x.h"


//NVIC�궨��
#define KEY1_INT_EXTI_IRQ          EXTI0_IRQn
#define KEY2_INT_EXTI_IRQ          EXTI15_10_IRQn   //GPIO ����10��15���ж�


//EXTI �궨�� KEY1 
#define KEY1_INT_GPIO_CLK          (RCC_APB2Periph_GPIOA|RCC_APB2Periph_AFIO) // AFIO ���ⲿ�жϿ��ƼĴ��� AFIO_EXTICRx

#define KEY1_INT_GPIO_PORT         GPIOA
#define KEY1_INT_GPIO_PIN          GPIO_Pin_0

#define KEY1_INT_EXTI_PORTSOURCE   GPIO_PortSourceGPIOA  //��ʾ�ⲿ�жϽ����ӵ�GPIOA�˿�
#define KEY1_INT_EXTI_PINSOURCE    GPIO_PinSource0				//��ʾ�ⲿ�жϽ����ӵ�GPIOA�˿ڵĵ�0������

#define KEY1_INT_EXTI_LINE         EXTI_Line0    				//�����ⲿ�ж���

#define KEY1_IRQHandler            EXTI0_IRQHandler

///-----------////

//EXTI �궨�� KEY2 
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
