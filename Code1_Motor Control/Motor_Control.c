//+--------------------------------------------------------------------------------------+
//|                      ATtiny2313 Quad Motor Control Board V1.0                        |
//+--------------------------------------------------------------------------------------+
//| Program to Switch on all the Motors Connected to ATtiny2313 Quad Motor Control Board |
//+--------------------------------------------------------------------------------------+
//|Circuit Connections                                                                   |
//|                                                                                      |
//|      ATtiny2313        L293D [U4]                                                    |
//|    +------------+     +----------+                                                   |
//|    |         PD2|---->|1A      1Y|-----+==+                                          |
//|    |         PD6|---->|2A        |     |P4|(Motor1)                                  |
//|    |         PB2|---->|EN1     2Y|-----+==+                                          |
//|    |            |     |          |                                                   |
//|    |         PB0|---->| 3A     3Y|-----+==+                                          |
//|    |         PB1|---->| 4A       |     |P5|(Motor2)                                  |
//|    |         PD5|---->| EN2    4Y|-----+==+                                          |
//|    |            |     +----------+                                                   |
//|    |            |      L293D [U5]                                                    |
//|    |            |     +----------+                                                   |
//|    |         PB5|---->|1A      1Y|-----+==+                                          |
//|    |         PB6|---->|2A        |     |P6|(Motor3)                                  |
//|    |         PB3|---->|EN1     2Y|-----+==+                                          |
//|    |            |     |          |                                                   |
//|    |         PA0|---->|3A      3Y|-----+==+                                          |
//|    |         PA1|---->|4A        |     |P7|(Motor4)                                  |
//|    |         PB4|---->|EN2     4Y|-----+==+                                          |
//|    +------------+     +----------+                                                   |
//|                                                                                      |
//+--------------------------------------------------------------------------------------+
//| Compiler           : AVR GCC (WinAVR)                                                |
//| Microcontroller    : ATtiny2313                                                      |
//| Programmer         : Rahul.Sreedharan                                                |
//| Date               : 15-May-2016                                                     |
//+--------------------------------------------------------------------------------------+

//(C) www.xanthium.in 
// Visit to Learn More 


#include <stdint.h>
#include <avr/io.h>
int main()
{
    // Direction Control for PortA,PortB and PortD 
	DDRA |= (1<<PA0) | (1<<PA1);            // PA0 and PA1 
	DDRB  = 0x7F;                           // PB0,PB1,PB2,PB3,PB4,PB5,PB6 all Output
	DDRD |= (1<<PD2) | (1<<PD5) | (1<<PD6); // PD2,PD5,PD6 all outputs 
	
	
	//Motor Connector P4
	//PD2 -> 1A  [U4]
	//PD6 -> 2A  [U4]
	//PB2 -> EN1 [U4]
	PORTD |=  (1<<PD2); // PD2 -> 1A = High
	PORTD &= ~(1<<PD6); // PD6 -> 2A = Low
	PORTB |=  (1<<PB2); // PB2 -> EN1 = High; Start the motor 
	
	//Motor Connector P5
	//PB0 -> 3A  [U4]
	//PB1 -> 4A  [U4]
	//PD5 -> EN2 [U4]
	PORTB |=  (1<<PB0); // PB0 -> 3A = High
	PORTB &= ~(1<<PB1); // PB1 -> 4A = Low
	PORTD |=  (1<<PD5); // PD5 -> EN2 = High; Start the motor 
	
	//Motor Connector P6
	//PB5 -> 1A  [U5]
	//PB6 -> 2A  [U5]
	//PB3 -> EN1 [U5]
	PORTB |=  (1<<PB5); // PB5 -> 1A = High
	PORTB &= ~(1<<PB6); // PB6 -> 2A = Low
	PORTB |=  (1<<PB3); // PB3 -> EN1 = High; Start the motor 
	
	//Motor Connector P7
	//PA0 -> 3A  [U5]
	//PA1 -> 4A  [U5]
	//PB4 -> EN2 [U5]
	PORTA |=  (1<<PA0); // PA0 -> 3A = High
	PORTA &= ~(1<<PA1); // PA1 -> 4A = Low
	PORTB |=  (1<<PB4); // PB4 -> EN2 = High; Start the motor 
	
	while(1); //Stay here
	
	return 0;
}