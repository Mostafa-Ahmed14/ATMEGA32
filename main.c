/*
 * main.c
 *
 *  Created on: Jul 25, 2021
 *      Author: Mostafa
 */


/* Keypad Interfacing  with Microcontroller
Embedded Systems - Ravi kiran Bolla (YouTube Channel) */

#include <REGX51.H>
#define out_leds P2
#define keypad   P1
void main(void)
{
	out_leds = 0x00;
	while(1)
	{
		keypad = 0xFE; //ROW1 =0

		if(keypad == 0xee) // button 1
		{
			out_leds = 1;
		}
		if(keypad == 0xde) // button 2
		{
			out_leds = 2;
		}
		if(keypad == 0xbe) // button 3
		{
			out_leds = 3;
		}

		keypad = 0xFD; //ROW2 =0
		if(keypad == 0xED) // button 4
		{
			out_leds = 4;
		}
		if(keypad == 0xDD) // button 5
		{
			out_leds = 5;
		}
		if(keypad == 0xBD) // button 6
		{
			out_leds = 6;
		}

		keypad = 0xFB; //ROW3 =0
		if(keypad == 0xEB) // button 7
		{
			out_leds = 7;
		}
		if(keypad == 0xDB) // button 8
		{
			out_leds = 8;
		}
		if(keypad == 0xBB) // button 9
		{
			out_leds = 9;
		}

		keypad = 0xF7; //ROW3 =0
		if(keypad == 0xE7) // button *
		{
			out_leds = '*';
		}
		if(keypad == 0xD7) // button 0
		{
			out_leds = 0;
		}
		if(keypad == 0xB7) // button #
		{
			out_leds = '#';
		}




	}
}
