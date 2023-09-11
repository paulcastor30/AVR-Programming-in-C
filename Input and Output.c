/*
 * Arduino Mega 2560.c
 *
 * Created: 03/02/2023 11:16:55 am
 * Author : Apple Rose
 */ 

#include <avr/io.h>
#define F_CPU 16000000UL
#include "util/delay.h"
int main(void)
{
	DDRB = 0xFF;
	DDRC = 0xFF;
	while(1) //loop forever
	{
		PORTB ^= 0xFF; //toggle port B
		PORTC ^= 0xFF; //toggle port C
		_delay_ms(1000); //wait 1 second
	}
}

