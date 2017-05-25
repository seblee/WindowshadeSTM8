/***********************************************************************/
/*  FILE        :Timer.c                                               */
/*  DATE        :Mar, 2014                                             */
/*  Programmer	:xiang 'R                                              */
/*  CPU TYPE    :STM8L151G6     Crystal: 16M HSI                       */
/*  DESCRIPTION :                                                      */
/*  Mark        :ver 1.0                                               */
/***********************************************************************/
#include <iostm8l151g4.h> // CPU�ͺ�
#include "Pin_define.h"   // �ܽŶ���
//#include "initial.h"		// ��ʼ��  Ԥ����
#include "ram.h" // RAM����

u16 LedREDTimer = 1;
u16 LedYELLOWTimer = 1;
u16 ErrStateTimeer = 1;
u16 StateReadTimer = 500;
uFLAG LedFlag;

//%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%Timer 4 start   1ms
void TIM4_Init(void)
{
    TIM4_PSCR = 0x06; // Timer 4 prescaler  ������ʱ��Ƶ��  f CK_CNT  =f CK_PSC  / 2��N�η�
                      //TIM4_PSCR = 0x08;	// Timer 4 prescaler  ������ʱ��Ƶ��  f CK_CNT  = f CK_PSC/ 2(PSC[3:0])
    TIM4_ARR = 0xF9;  // Timer 4 period
    TIM4_CR1 |= 0x01; // Timer 4 Enable
    TIM4_IER |= 0x01; // Timer 4 OVR interrupt
}

void TIM4_UPD_OVF(void)
{ //725==1��

    if ((LedREDTimer > 1) && ((RedStutue & 0x0f) != LEDONFLAG))
        LedREDTimer--;
    if ((LedYELLOWTimer > 1) && ((YellowStutue & 0x0f) != LEDONFLAG))
        LedYELLOWTimer--;
    if (ErrStateTimeer > 1)
        ErrStateTimeer--;
    if (StateReadTimer > 0)
        StateReadTimer--;
    TIM4_SR1_bit.UIF = 0; // ����жϱ��
}
