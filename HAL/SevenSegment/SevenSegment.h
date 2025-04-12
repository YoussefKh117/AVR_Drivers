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

#ifndef SEVENSEGMENT_H_
#define SEVENSEGMENT_H_
#include "std_types.h"

#define PORT_7SEG_ID PORTA_ID
#define PORT_7SEG_Enable PORTC_ID
#define PIN_7SEG_Enable PIN6_ID

void SevenSegment_INIT(void);
void SevenSegment_Display(uint8);

#endif /* SEVENSEGMENT_H_ */
