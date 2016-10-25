//+-------------------------------------------------------------------+
//| Hardware -> ATtiny2313 Serial/RS485 Relay Control Board V1.0      |
//|                 (C) www.xanthium.in                               |
//+-------------------------------------------------------------------+
//| Connection Diagram                                                |
//+-------------------------------------------------------------------+
//|                ATtiny2313                                         |
//|               +-----------+                                       |
//|	              |    	   PB0|--------->[RL0]->[K1]                  |
//|	              |        PB1|--------->[RL1]->[K2]	              |
//|            	  |        PB2|--------->[RL2]->[K3]                  |
//|               |        PB3|--------->[RL3]->[K4]                  |
//|	              |        PB4|--------->[RL4]->[K5]                  |
//|	              |        PB5|--------->[RL5]->[K6]                  |
//|               +-----------+                                       |
//|        ATtiny2313 Serial/RS485 Relay Control Board V1.0           |
//+-------------------------------------------------------------------+


#include <stdint.h>
#include <avr/io.h>
#include "Relay.h"


void Relay_RL0(char action)
{
	DDRB |= (1<<PB0);
	switch(action)
	{
		case ON  :  PORTB |=  (1<<PB0); // PB0 high,Relay RL0 ON
					break;
		case OFF :  PORTB &= ~(1<<PB0); // PB0 Low,Relay RL0 OFF
					break;
		default  :	PORTB &= ~(1<<PB0); // PB0 Low,Relay RL0 OFF
					break;
	}
}

void Relay_RL1(char action)
{
	DDRB |= (1<<PB1);
	switch(action)
	{
		case ON  :  PORTB |=  (1<<PB1); // PB1 high,Relay RL1 ON
					break;
		case OFF :  PORTB &= ~(1<<PB1); // PB1 Low,Relay RL1 OFF
					break;
		default  :	PORTB &= ~(1<<PB1); // PB1 Low,Relay RL1 OFF
					break;
	}
}


void Relay_RL2(char action)
{
	DDRB |= (1<<PB2);
	switch(action)
	{
		case ON  :  PORTB |=  (1<<PB2); // PB2 high,Relay RL2 ON
					break;
		case OFF :  PORTB &= ~(1<<PB2); // PB2 Low,Relay RL2 OFF
					break;
		default  :	PORTB &= ~(1<<PB2); // PB2 Low,Relay RL2 OFF
					break;
	}
}

void Relay_RL3(char action)
{
	DDRB |= (1<<PB3);
	switch(action)
	{
		case ON  :  PORTB |=  (1<<PB3); // PB3 high,Relay RL3 ON
					break;
		case OFF :  PORTB &= ~(1<<PB3); // PB3 Low,Relay RL3 OFF
					break;
		default  :	PORTB &= ~(1<<PB3); // PB3 Low,Relay RL3 OFF
					break;
	}
}

void Relay_RL4(char action)
{
	DDRB |= (1<<PB4);
	switch(action)
	{
		case ON  :  PORTB |=  (1<<PB4); // PB4 high,Relay RL4 ON
					break;
		case OFF :  PORTB &= ~(1<<PB4); // PB4 Low,Relay RL4 OFF
					break;
		default  :	PORTB &= ~(1<<PB4); // PB4 Low,Relay RL4 OFF
					break;
	}
}

void Relay_RL5(char action)
{
	DDRB |= (1<<PB5);
	switch(action)
	{
		case ON  :  PORTB |=  (1<<PB5); // PB5 high,Relay RL5 ON
					break;
		case OFF :  PORTB &= ~(1<<PB5); // PB5 Low,Relay RL5 OFF
					break;
		default  :	PORTB &= ~(1<<PB4); // PB5 Low,Relay RL5 OFF
					break;
	}
}
