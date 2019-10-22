#ifndef MADVANED_TIMER_H
#define MADVANED_TIMER_H

typedef struct
{
	volatile u32 TIMx_CR1;
	volatile u32 TIMx_CR2;
	volatile u32 TIMx_SMCR;
	volatile u32 TIMx_DIER;
	volatile u32 TIMx_SR;
	volatile u32 TIMx_EGR;
	volatile u32 TIMx_CCMR1;
	volatile u32 TIMx_CCMR2;
	volatile u32 TIMx_CCER;
	volatile u32 TIMx_CNT;
	volatile u32 TIMx_PSC;
	volatile u32 TIMx_ARR;
    volatile u32 TIMx_RCR;
	volatile u32 TIMx_CCR1;
	volatile u32 TIMx_CCR2;
	volatile u32 TIMx_CCR3;
	volatile u32 TIMx_CCR4;
	volatile u32 TIMx_BDTR;
	volatile u32 TIMx_DCR;
	volatile u32 TIMx_DMAR;

	
}ADVANCED_TIMER_type;

#define TIMER1  ((volatile ADVANCED_TIMER_type*) 0x40012C00)
#define TIMER8  ((volatile ADVANCED_TIMER_type*) 0x40013400)


#endif
