#include "LSTD_TYPES.h"

#include "MADVANCED_TIMER_private.h"
#include "MADVANCED_TIMER_interface.h"


void (*TIMER1_CallBack)(void);

void MTIMER1_Initialize(void)
{ 

	//16mhz  16/4=4mhz   4,000,000/4000=1000 hz     1ms per 1 count
	// so it will make an update event in 5000*1ms=5000ms =5s
	
	TIMER1 ->TIMx_DIER|=1;  //enable update interrupt
	TIMER1 ->TIMx_CNT=3000;    //counter
	TIMER1 ->TIMx_PSC=16000;
	TIMER1-> TIMx_CR1 = 0X0015;  //enable counter

    	
}


void setCallBack(void(*ptr)(void))
{
	TIMER1_CallBack=ptr;

}


void TIM1_UP_IRQHandler(void)
{ //id --> 25   of interrupt
   TIMER1->TIMx_SR |=0;//clear interrupt flag
	TIMER1_CallBack();
}
