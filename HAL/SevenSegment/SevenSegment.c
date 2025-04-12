/*
 *  Module    : SevenSegmentDisplay
 *
 *	File name : SevenSegment.c
 *
 *	Description: Source file for the SevenSegment driver
 *
 *  Created on: Sep 30, 2024
 *
 *      Author: Youssef Khaled
 *
 */

#include "SevenSegment.h"
#include "GPIO.h"

uint8 numbers[] = { 0x7E, 0x0C, 0xB6, 0x9E, 0xCC, 0xDA, 0xFA, 0x0E, 0xFE, 0xDE };

void SevenSegment_INIT() {
	GPIO_setupPortDirection(PORT_7SEG_ID, 0xFE);
	GPIO_setupPinDirection(PORTC_ID, PIN6_ID, PIN_OUTPUT);
	GPIO_writePin(PORTC_ID, PIN6_ID, LOGIC_HIGH);
	GPIO_writePort(PORT_7SEG_ID, numbers[0]);
}
void SevenSegment_Display(uint8 num) {
	if (num >= 0 && num <= 9) {
		GPIO_writePort(PORT_7SEG_ID, numbers[num]);
	}
}
