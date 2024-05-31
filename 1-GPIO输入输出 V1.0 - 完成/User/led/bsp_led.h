#ifndef __LED_H
#define	__LED_H


#include "stm32f10x.h"


// R-��ɫ
#define LED1_GPIO_PORT      GPIOB                         /* GPIO�˿� */
#define LED1_GPIO_CLK       RCC_APB2Periph_GPIOB        /* GPIO�˿�ʱ�� */
#define LED1_GPIO_PIN       GPIO_Pin_5                  /* ���ӵ�SCLʱ���ߵ�GPIO */
// G-��ɫ
#define LED2_GPIO_PORT      GPIOB                         /* GPIO�˿� */
#define LED2_GPIO_CLK       RCC_APB2Periph_GPIOB        /* GPIO�˿�ʱ�� */
#define LED2_GPIO_PIN       GPIO_Pin_0                  /* ���ӵ�SCLʱ���ߵ�GPIO */
// B-��ɫ
#define LED3_GPIO_PORT      GPIOB                         /* GPIO�˿� */
#define LED3_GPIO_CLK       RCC_APB2Periph_GPIOB        /* GPIO�˿�ʱ�� */
#define LED3_GPIO_PIN       GPIO_Pin_1                  /* ���ӵ�SCLʱ���ߵ�GPIO */




void LED_GPIO_Config(void);
void LED_Togg(void);


#endif /* __LED_H */
