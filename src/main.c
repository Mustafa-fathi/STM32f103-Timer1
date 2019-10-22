/*
 * main.c
 *
 *  Created on: Sep 28, 2018
 *      Author: Hampota
 */
#include"LSTD_TYPES.h"
#include "MRCC_interface.h"
#include "MDIO_interface.h"
#include "MADVANCED_TIMER_interface.h"

void toggle_led(void)
{
	static char flag=1;
	if(flag)
	{
		MDIO_clr_pin(MDIO_PORTA,0);
		flag=0;
	}
	else
	{
		 MDIO_set_pin(MDIO_PORTA,0);
	}

}

void main(void)
{

	MRCC_Initialize();
	MRCC_EnableClock(BUS_ABP2,PERIPHERAL_TIMER1);
	MRCC_EnableClock(BUS_ABP2,PERIPHERAL_GPIOA);
    MDIO_Initialize();
    MDIO_set_pin(MDIO_PORTA,0);

    MNVK_EnableInt(25);  //enable interrupt of TIMER1

    setCallBack(toggle_led);

    MTIMER1_Initialize();


    while(1)
    {

    }

}
