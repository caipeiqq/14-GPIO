#ifndef __KEY_H
#define __KEY_H

#include "stm32f10x.h"

// Key1 PA0
#define KEY1_GPIO_PORT      GPIOA                         /* GPIO端口 */
#define KEY1_GPIO_CLK       RCC_APB2Periph_GPIOA        /* GPIO端口时钟 */
#define KEY1_GPIO_PIN       GPIO_Pin_0                  /* 连接到SCL时钟线的GPIO */

// Key2 PC13
#define KEY2_GPIO_PORT      GPIOC                         /* GPIO端口 */
#define KEY2_GPIO_CLK       RCC_APB2Periph_GPIOC        /* GPIO端口时钟 */
#define KEY2_GPIO_PIN       GPIO_Pin_13                  /* 连接到SCL时钟线的GPIO */

#define KEY_ON 1
#define KEY_OFF 0


void KEY_GPIO_Config(void);
uint8_t Key_Scan(GPIO_TypeDef* GPIOx,uint16_t GPIO_Pin);
void delay_ms(u16 time);

#endif /* __KEY_H */
