/**
  ******************************************************************************
  * @file    main.c
  * @author  fire
  * @version V1.0
  * @date    2013-xx-xx
  * @brief   dht11��ʪ�ȴ���������ʵ��
  ******************************************************************************
  * @attention
  *
  * ʵ��ƽ̨:Ұ�� �Ե� STM32 ������ 
  * ��̳    :http://www.firebbs.cn
  * �Ա�    :https://fire-stm32.taobao.com
  *
  ******************************************************************************
  */
  
#include "stm32f10x.h"
#include "bsp_usart.h"
#include "bsp_led.h"
#include "bsp_ili9341_lcd.h"


/**
  * @brief  ������
  * @param  ��  
  * @retval ��
  */
int main(void)
{
//	char dispBuff[100];
//  
//	DHT11_Data_TypeDef DHT11_Data;

//	/* ��ʼ��ϵͳ��ʱ�� */
//	SysTick_Init();
//  
//  //LCD ��ʼ��
//	ILI9341_Init (); 
// //����0��3��5��6 ģʽ�ʺϴ���������ʾ���֣�
// //���Ƽ�ʹ������ģʽ��ʾ����	����ģʽ��ʾ���ֻ��о���Ч��			
// //���� 6 ģʽΪ�󲿷�Һ�����̵�Ĭ����ʾ����  
//	ILI9341_GramScan ( 6 );

//  ILI9341_Clear(0,0,LCD_X_LENGTH,LCD_Y_LENGTH);	/* ��������ʾȫ�� */
//  
//	/*��ʼ��DTT11������*/
//	DHT11_Init ();
    uint8_t ch;
    USART_Config();
	LED_GPIO_Config();

    printf( "����һ�����ڿ���RGB�Ƶĳ���\n" );
    
	while(1)
	{	
		ch = getchar();
	    printf( "ch=%c\n",ch );
        switch (ch)
        {
            case '1': LED_RED;
                break;
            case '2': LED_GREEN;
                break;
            case '3': LED_BLUE;
                break;
            default: LED_RGBOFF;
								break;    
        }
	}
}
/*********************************************END OF FILE**********************/
