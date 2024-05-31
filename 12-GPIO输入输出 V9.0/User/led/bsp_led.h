#ifndef __LED_H
#define	__LED_H


#include "stm32f10x.h"


// R-红色
#define LED1_GPIO_PORT      GPIOB                         /* GPIO端口 */
#define LED1_GPIO_CLK       RCC_APB2Periph_GPIOB        /* GPIO端口时钟 */
#define LED1_GPIO_PIN       GPIO_Pin_5                  /* 连接到SCL时钟线的GPIO */
// G-绿色
#define LED2_GPIO_PORT      GPIOB                         /* GPIO端口 */
#define LED2_GPIO_CLK       RCC_APB2Periph_GPIOB        /* GPIO端口时钟 */
#define LED2_GPIO_PIN       GPIO_Pin_0                  /* 连接到SCL时钟线的GPIO */
// B-蓝色
#define LED3_GPIO_PORT      GPIOB                         /* GPIO端口 */
#define LED3_GPIO_CLK       RCC_APB2Periph_GPIOB        /* GPIO端口时钟 */
#define LED3_GPIO_PIN       GPIO_Pin_1                  /* 连接到SCL时钟线的GPIO */




void LED_GPIO_Config(void);
void LED_Togg(void);


#endif /* __LED_H */
