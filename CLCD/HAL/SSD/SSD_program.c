/*
 * SSD_program.c
 *
 *  Created on: Jun 5, 2021
 *      Author: user
 */

#include "../../LIB/STD_TYPES.h"
#include "../../LIB/BIT_MATH.H"

#include "../../MCAL/DIO/DIO_interface.h"

#include "SSD_interface.h"
#include "SSD_private.h"
#include "SSD_config.h"


void SSD_voidInit( void ){

	DIO_voidSetPinDirection( PORTA , PIN4 , OUTPUT );
	DIO_voidSetPinDirection( PORTA , PIN5 , OUTPUT );
	DIO_voidSetPinDirection( PORTA , PIN6 , OUTPUT );
	DIO_voidSetPinDirection( PORTA , PIN7 , OUTPUT );

	#if SSD_NUM_1 == SSD_A

		DIO_voidSetPinDirection( PORTB , PIN2 , OUTPUT );

	#endif
	#if SSD_NUM_2 == SSD_B

		DIO_voidSetPinDirection( PORTB , PIN1 , OUTPUT );

	#endif

}

void SSD_voidSendNumber( u8 Copy_u8Number ){

	DIO_voidSetPortValue( PORTA , ( Copy_u8Number << 4 ) );

}

void SSD_voidEnable  (void){

	#if SSD_NUM_1 == SSD_A

		DIO_voidSetPinValue( PORTB , PIN2 , HIGH );

	#endif
	#if SSD_NUM_2 == SSD_B

		DIO_voidSetPinValue( PORTB , PIN1 , HIGH );

	#endif

}
void SSD_voidDisbale (void){

	#if SSD_NUM_1 == SSD_A

		DIO_voidSetPinValue( PORTB , PIN2 , LOW );

	#endif
	#if SSD_NUM_2 == SSD_B

		DIO_voidSetPinValue( PORTB , PIN1 , LOW );

	#endif

}



