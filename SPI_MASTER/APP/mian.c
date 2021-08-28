/*
 * mian.c
 *
 *  Created on: Aug 24, 2021
 *      Author: Mostafa
 */
#include "../LIB/STD_TYPES.h"
#include "../LIB/BIT_MATH.h"

#include <util/delay.h>

#include "../MACL/DIO/DIO_interface.h"
#include "../MACL/SPI_MASTER/SPI_MASTER_interface.h"

#include "../HAL/CLCD/CLCD_interface.h"
#include "../HAL/LED/LED_interface.h"


int main(void)
{
	u8 rx = 0;
	LED_Type A1={PORTA , PIN1 , LED_ACTIVE_HIGH};
	//DIO_voidSetPinDirection( PORTA , PIN1 , OUTPUT );
	SPI_voidMasterInit();
	SPI_voidMasterStart();
	_delay_ms(1000);
	while(1)
	{

		rx = SPI_u8MasterTransmit(1);
		if(rx == 2)
		{
			LED_voidToggle(A1);
			rx = 0;
		}
		_delay_ms(1000);
	}
}
