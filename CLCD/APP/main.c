/*
 * main.c
 *
 *  Created on: May 29, 2021
 *      Author: AMIT
 */

#include "../LIB/STD_TYPES.h"
#include "../LIB/BIT_MATH.H"

#include <util/delay.h>

#include "../MCAL/DIO/DIO_interface.h"
#include "../HAL/CLCD/CLCD_interface.h"

int main(void){


/*
	u8 arr[] = {  0x00,
			      0x00,
			      0x1F,
			      0x05,
			      0x07,
			      0x00,
			      0x00,
			      0x00,

				  0x00,
				  0x00,
				  0x13,
				  0x12,
				  0x1E,
				  0x00,
				  0x00,
				  0x00};
*/
	CLCD_voidInit();
	CLCD_voidWriteData('M');
	//CLCD_voidWriteExtraChar( arr , 16 , CLCD_Row2 , CLCD_Col5 );

	/*CLCD_voidWriteCommend(0x40);

	CLCD_voidWriteData(  0x00 );
	CLCD_voidWriteData(  0x00 );
	CLCD_voidWriteData(  0x00 );
	CLCD_voidWriteData(  0x1F );
	CLCD_voidWriteData(  0x05 );
	CLCD_voidWriteData(  0x07 );
	CLCD_voidWriteData(  0x00 );
	CLCD_voidWriteData(  0x00 );

	CLCD_voidWriteData(  0x00 );
	CLCD_voidWriteData(  0x00 );
	CLCD_voidWriteData(  0x00 );
	CLCD_voidWriteData(  0x13 );
	CLCD_voidWriteData(  0x12 );
	CLCD_voidWriteData(  0x1E );
	CLCD_voidWriteData(  0x00 );
	CLCD_voidWriteData(  0x00 );

	CLCD_voidSetPosition( CLCD_Row2 , CLCD_Col5 );
	CLCD_voidWriteData( 1 );
	CLCD_voidWriteData( 0 );*/

	/*CLCD_voidInit();
	CLCD_voidSetPosition( CLCD_Row2 , CLCD_Col5 );
	CLCD_voidSendNumber(1234);
	//CLCD_voidSendString(( u8 * ) "AHMED" );
*/
	/*CLCD_voidInit();
	u8 arr[] = "Mostafa";
	CLCD_voidSendString(arr);*/

	/*CLCD_voidInit();
	CLCD_voidWriteData('H');
	CLCD_voidWriteData('E');
	CLCD_voidWriteData('S');
	CLCD_voidWriteData('H');
	CLCD_voidWriteData('A');
	CLCD_voidWriteData('M');*/

	while(1){



	}

	return 0;
}

