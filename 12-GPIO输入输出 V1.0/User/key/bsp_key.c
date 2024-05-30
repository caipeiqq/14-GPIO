/**
  ******************************************************************************
  * @file    bsp_led.c
  * @author  fire
  * @version V1.0
  * @date    2013-xx-xx
  * @brief   ledӦ�ú����ӿ�
  ******************************************************************************
  * @attention
  *
  * ʵ��ƽ̨:���� F103-ָ���� STM32 ������ 
  * ��̳    :http://www.firebbs.cn
  * �Ա�    :https://fire-stm32.taobao.com
  *
  ******************************************************************************
  */

#include "bsp_key.h"

void KEY_GPIO_Config(void)
{
    GPIO_InitTypeDef GPIO_InitStructure;
    
    /*���������˿ڵ�ʱ��--ʹ������ʱ��*/
    RCC_APB2PeriphClockCmd(KEY1_GPIO_CLK|KEY2_GPIO_CLK,ENABLE);
    
  //key1����
    GPIO_InitStructure.GPIO_Pin = KEY1_GPIO_PIN;                  //ѡ�񰴼�������   
    GPIO_InitStructure.GPIO_Mode = GPIO_Mode_IN_FLOATING; // ���ð���������Ϊ��������
    GPIO_Init(KEY1_GPIO_PORT, &GPIO_InitStructure);           //ʹ�ýṹ���ʼ������
     
  //key2����
    GPIO_InitStructure.GPIO_Pin = KEY2_GPIO_PIN;                 //ѡ�񰴼�������    
    GPIO_InitStructure.GPIO_Mode = GPIO_Mode_IN_FLOATING; //���ð���������Ϊ��������
    GPIO_Init(KEY2_GPIO_PORT, &GPIO_InitStructure);            //ʹ�ýṹ���ʼ������
}

/*********************************************END OF FILE**********************/


uint8_t Key_Scan(GPIO_TypeDef* GPIOx,uint16_t GPIO_Pin)
{           
    /*����Ƿ��а������� */
    if(GPIO_ReadInputDataBit(GPIOx,GPIO_Pin) == KEY_ON )  
    {    
        /*�ȴ������ͷ� */
        while(GPIO_ReadInputDataBit(GPIOx,GPIO_Pin) == KEY_ON );   
        return  1;  
    }
    else
        return 0;
}
