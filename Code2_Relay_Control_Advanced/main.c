//+--------------------------------------------------------------------------------------+
//|				    ATtiny Serial/RS485 6channel Relay Control Board V1.0                |
//|                            (C) www.xanthium.in                                       |
//+--------------------------------------------------------------------------------------+
//|                                                                                      |
//| Switches on all Relays on the "ATtiny Serial/RS485 6channel Relay Control Board"     |
//| Here Relay control functions are in Relay.c file                                     |
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

#include "Relay.h"      //Contains Relay Control Functions 

int main()
{
	// Relay RL0 Control 
		Relay_RL0(ON);
		_delay_ms(250);
	
		Relay_RL0(OFF);
		_delay_ms(250);
	
	// Relay RL1 Control 
		Relay_RL1(ON);
		_delay_ms(250);
	
		Relay_RL1(OFF);
		_delay_ms(250);
	
	// Relay RL2 Control 
		Relay_RL2(ON);
		_delay_ms(250);
	
		Relay_RL2(OFF);
		_delay_ms(250);
	
	// Relay RL3 Control 
		Relay_RL3(ON);
		_delay_ms(250);
	
		Relay_RL3(OFF);
		_delay_ms(250);
	
	// Relay RL4 Control 
		Relay_RL4(ON);
		_delay_ms(250);
	
		Relay_RL4(OFF);
		_delay_ms(250);
		
	// Relay RL5 Control 
		Relay_RL5(ON);
		_delay_ms(250);
	
		Relay_RL5(OFF);
		_delay_ms(250);
	
}