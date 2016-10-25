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
//| Date               : 21-May-2016                                                     |
//+--------------------------------------------------------------------------------------+

//(C) www.xanthium.in 
// Visit to Learn More 

#include <stdint.h>
#include <avr/io.h>
#include <util/delay.h>
#include "motor.h"       //Contains constants and function definitions for motor.c
int main()
{
	while(1)
	{
		//P6 Operation
		Motor_Control_P6(ON);
		_delay_ms(3000);
		Motor_Control_P6(OFF);
		_delay_ms(3000);
		Motor_Control_P6(REVERSE);
		_delay_ms(3000);
		Motor_Control_P6(OFF);
	
		//P7 Operation
		Motor_Control_P7(ON);
		_delay_ms(3000);
		Motor_Control_P7(OFF);
		_delay_ms(3000);
		Motor_Control_P7(REVERSE);
		_delay_ms(3000);
		Motor_Control_P7(OFF);
	
		//P4 Operation
		Motor_Control_P4(ON);
		_delay_ms(3000);
		Motor_Control_P4(OFF);
		_delay_ms(3000);
		Motor_Control_P4(REVERSE);
		_delay_ms(3000);
		Motor_Control_P4(OFF);
	
		//P5 Operation
		Motor_Control_P5(ON);
		_delay_ms(3000);
		Motor_Control_P5(OFF);
		_delay_ms(3000);
		Motor_Control_P5(REVERSE);
		_delay_ms(3000);
		Motor_Control_P5(OFF);
	}
	
}