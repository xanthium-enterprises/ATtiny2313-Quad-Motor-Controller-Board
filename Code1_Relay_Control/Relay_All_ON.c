//+--------------------------------------------------------------------------------------+
//|				    ATtiny Serial/RS485 6channel Relay Control Board V1.0                |
//|                            (C) www.xanthium.in                                       |
//+--------------------------------------------------------------------------------------+
//|                                                                                      |
//| Switches on all Relays on the "ATtiny Serial/RS485 6channel Relay Control Board"     |
//+--------------------------------------------------------------------------------------+ 
//| Circuit Diagram                                                                      |
//|-----------------                                                                     |
//|       ATtiny2313                                                                     |
//|		+------------+                                                                   |
//|     |         PB0|-------------------->[Relay RL0/K1]---[LED D0]                     |
//|     |         PB1|-------------------->[Relay RL1/K2]---[LED D1]                     |
//|     |         PB2|-------------------->[Relay RL2/K3]---[LED D2]                     |
//|     |         PB3|-------------------->[Relay RL3/K4]---[LED D3]                     |
//|     |         PB4|-------------------->[Relay RL4/K5]---[LED D4]                     |
//|     |         PB5|-------------------->[Relay RL5/K6]---[LED D5]                     |
//|     +------------+                                                                   |
//|                                                                                      |
//| RL* -> SPDT Relay (RL0,RL1,RL2.....)                                                 |
//| K*  -> 3 pin Relay Contact Connector (K1,K2,K3...)                                   |
//| D*  -> LED indicator for the relays  (D0,DI,D2.....)                                 |
//+--------------------------------------------------------------------------------------+
//| Compiler           : AVR GCC (WinAVR)                                                |
//| Microcontroller    : ATtiny2313                                                      |
//| Programmer         : Rahul.Sreedharan                                                |
//| Date               : 25-October-2016                                                 |
//+--------------------------------------------------------------------------------------+




#include <stdint.h>
#include <avr/io.h>
#include <avr/delay.h>
int main()
{   
	DDRB = 0xFF; // Port B all outputs
	PORTB =0x00;
	
	    PORTB |= (1<<PB0); // Switch on Relay RL0,LED D0 ON
		_delay_ms(250);
		PORTB |= (1<<PB1); // Switch on Relay RL1,LED D1 ON
		_delay_ms(250);
		PORTB |= (1<<PB2); // Switch on Relay RL2,LED D2 ON
		_delay_ms(250);
		PORTB |= (1<<PB3); // Switch on Relay RL3,LED D3 ON
		_delay_ms(250);
		PORTB |= (1<<PB4); // Switch on Relay RL4,LED D4 ON
		_delay_ms(250);
		PORTB |= (1<<PB5); // Switch on Relay RL5,LED D5 ON
		
	while(1); //Stay here 
	
	
}