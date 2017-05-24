#ifndef __PIN_DEFINE_H__
#define __PIN_DEFINE_H__
/***********************************************************************/
/*  File Name   :Pin_Define.h                                          */
/*  DATE        :Mar, 2014                                             */
/*  Programmer	:xiang 'R                                              */
/*  CPU TYPE    :STM8L151G6     Crystal: 16M HSI                       */
/*  DESCRIPTION :                                                      */
/*  Mark        :ver 1.0                                               */
/***********************************************************************/
#include "Timer.h"

//������IO����
/********************LED�Ĵ���*****************************************/
#define LED_ON					1
#define LED_OFF					0
#define LED_YELLOW              PC_ODR_ODR0    //�Ƶ�
#define LED_YELLOW_DDR          PC_DDR_DDR0    //�ƵƷ���
#define LED_YELLOW_CR1          PC_CR1_C10     //�Ƶ�����
#define LED_YELLOW_CR2          PC_CR2_C20     //�Ƶ����Ƶ��

#define LED_RED                 PC_ODR_ODR1    //���
#define LED_RED_DDR             PC_DDR_DDR1    //����
#define LED_RED_CR1             PC_CR1_C11     //����
#define LED_RED_CR2             PC_CR2_C21     //���Ƶ��


#define YELLOWLED_FLASH_SECOND()    {LED_YELLOW = LED_ON;LedYELLOWTimer = 750;}
#define YELLOWLED_OFF()     	    {LED_YELLOW = LED_OFF;LedYELLOWTimer = 0;}
#define YELLOWLED_FLASH()   	    {LED_YELLOW = !LED_YELLOW;LedYELLOWTimer = 60;}

#define REDLED_FLASH_SECOND()       {LED_RED = LED_ON;LedREDTimer = 750;}
#define REDLED_OFF()     	        {LED_RED = LED_OFF;LedREDTimer = 0;}
#define REDLED_FLASH()   	        {LED_RED = !LED_RED;LedREDTimer = 60;}

/********************LCD�Ĵ���*****************************************/
#define	PIN_LCD_SCLK	        PD_ODR_ODR1		// �����LCD����ʱ��(��)
#define	PIN_LCD_RST	       	 	PD_ODR_ODR2		// �����LCD��λ��  �͵�ƽ��Ч(��)
#define	PIN_LCD_SDATA			PB_ODR_ODR1		// �����LCD��������(��)
#define	PIN_LCD_A0_RS			PD_ODR_ODR0		// �����LCD��������ѡ���  0--����   1--����(��)
#define	PIN_LCD_SEL				PD_ODR_ODR3		// �����оƬƬѡ   �͵�ƽ��Ч(��)
#define	PIN_LCD_LED				PA_ODR_ODR3

#define PIN_LCD_SCLK_DDR     	PD_DDR_DDR1  // Output
#define PIN_LCD_RST_DDR      	PD_DDR_DDR2  // Output
#define PIN_LCD_SDATA_DDR   	PB_DDR_DDR1  // Output
#define PIN_LCD_A0_RS_DDR    	PD_DDR_DDR0  // Output
#define PIN_LCD_SEL_DDR      	PD_DDR_DDR3  // Output
#define PIN_LCD_LED_DDR      	PA_DDR_DDR3  // Output

#define PIN_LCD_SCLK_CR1      	PD_CR1_C11  // Output
#define PIN_LCD_RST_CR1       	PD_CR1_C12  // Output
#define PIN_LCD_SDATA_CR1     	PB_CR1_C11  // Output
#define PIN_LCD_A0_RS_CR1     	PD_CR1_C10  // Output
#define PIN_LCD_SEL_CR1       	PD_CR1_C13  // Output
#define PIN_LCD_LED_CR1       	PA_CR1_C13  // Output

#define PIN_LCD_SCLK_CR2      	PD_CR2_C21  // Output
#define PIN_LCD_RST_CR2       	PD_CR2_C22  // Output
#define PIN_LCD_SDATA_CR2     	PB_CR2_C21  // Output
#define PIN_LCD_A0_RS_CR2    	PD_CR2_C20  // Output
#define PIN_LCD_SEL_CR2       	PD_CR2_C23  // Output
#define PIN_LCD_LED_CR2       	PA_CR2_C23  // Output

/******************������ADF7030-1�Ĵ���************************************/
/* ADF7030-1 register interface */
#define ADF7030_REST			PC_ODR_ODR5
#define ADF7030_REST_DDR		PC_DDR_DDR5
#define ADF7030_REST_CR1		PC_CR1_C15
#define ADF7030_REST_CR2		PC_CR2_C25

#define ADF7030_GPIO3			PD_IDR_IDR4
#define ADF7030_GPIO3_DDR		PD_DDR_DDR4
#define ADF7030_GPIO3_CR1		PD_CR1_C14
#define ADF7030_GPIO3_CR2		PD_CR2_C24
//
#define ADF7030_GPIO4			PC_IDR_IDR4
#define ADF7030_GPIO4_DDR		PC_DDR_DDR4
#define ADF7030_GPIO4_CR1		PC_CR1_C14
#define ADF7030_GPIO4_CR2		PC_CR2_C24

#define ADF7030_GPIO5			PC_IDR_IDR6
#define ADF7030_GPIO5_DDR		PC_DDR_DDR6
#define ADF7030_GPIO5_CR1		PC_CR1_C16
#define ADF7030_GPIO5_CR2		PC_CR2_C26

#define ADF7030CLK      ADF7030_GPIO4
#define ADF7030DATA     ADF7030_GPIO5

/******************������KEY�Ĵ���*******����*****************************/
#define KEY_SW2					PA_IDR_IDR4
#define KEY_SW2_DDR				PA_DDR_DDR4
#define KEY_SW2_CR1				PA_CR1_C14
#define KEY_SW2_CR2				PA_CR2_C24

#define KEY_SW3					PA_IDR_IDR5
#define KEY_SW3_DDR				PA_DDR_DDR5
#define KEY_SW3_CR1				PA_CR1_C15
#define KEY_SW3_CR2				PA_CR2_C25

#define KEY_SW4					PA_IDR_IDR2
#define KEY_SW4_DDR				PA_DDR_DDR2
#define KEY_SW4_CR1				PA_CR1_C12
#define KEY_SW4_CR2				PA_CR2_C22

#define KEY_Empty       0
#define KEY_SW2_Down    1
#define KEY_SW3_Down    2
#define KEY_SW4_Down    3

/********************�����л� CG2214M6�������żĴ���*****************************************/
#define CG2214M6_VC1          	PB_ODR_ODR2     //VC1
#define CG2214M6_VC1_DDR      	PB_DDR_DDR2     //����
#define CG2214M6_VC1_CR1      	PB_CR1_C12     //ģʽMODE
#define CG2214M6_VC1_CR2      	PB_CR2_C22     //���Ƶ�ʻ����жϿ���

#define CG2214M6_VC2          	PB_ODR_ODR3     //VC2
#define CG2214M6_VC2_DDR      	PB_DDR_DDR3     //����
#define CG2214M6_VC2_CR1      	PB_CR1_C13     //ģʽMODE
#define CG2214M6_VC2_CR2      	PB_CR2_C23     //���Ƶ�ʻ����жϿ���

#define CG2214M6_VC1_USE        {CG2214M6_VC1 = 1;CG2214M6_VC2 = 0;}
#define CG2214M6_VC2_USE        {CG2214M6_VC2 = 0;CG2214M6_VC2 = 1;}

#define CG2214M6_USE_T        CG2214M6_VC2_USE
#define CG2214M6_USE_R        CG2214M6_VC1_USE

/********************BEEP���żĴ���*****************************************/
#define PIN_BEEP                PA_ODR_ODR0     // Output   ������
#define PIN_BEEP_DDR         	PA_DDR_DDR0     // Output   ������
#define PIN_BEEP_CR1            PA_CR1_C10     // Output   ������//#define Receiver_OUT_STOP_CR1   PD_CR1_C11  // Output   ���Ż��̵���stop  �ߵ�ƽ��Ч

/********************WORK/TEST�л����żĴ���*****************************************/
#define WORK_TEST           	PB_IDR_IDR0    // Input ���Ż����Խ�  �ߵ�ƽ��Ч
#define WORK_TEST_DDR		    PB_DDR_DDR0    // Input ���Ż����Խ�  �ߵ�ƽ��Ч
#define WORK_TEST_CR1       	PB_CR1_C10    // Input ���Ż����Խ�  �ߵ�ƽ��Ч
#define WORK_TEST_CR2       	PB_CR2_C20    // Input ���Ż����Խ�  �ߵ�ƽ��Ч


#endif

