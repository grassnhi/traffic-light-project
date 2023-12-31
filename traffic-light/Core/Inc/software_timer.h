/*
 * software_timer.h
 *
 *  Created on: Nov 9, 2023
 *      Author: PC
 */

#ifndef INC_SOFTWARE_TIMER_H_
#define INC_SOFTWARE_TIMER_H_
#include <timer_llist.h>
#include "main.h"
#define NUM_OF_TIMERS 	9  
// Timer 0: AUTO mode				
// Timer 1: PEDESTRIAN
// Timer 2: UART (Mode1)
// Timer 3: Blinking

extern int TIME_CYCLE;					

int getFlagTimer(int index);
void setTimer(int index, int duration);
void clearTimer(int index);
void clearAllTimer();

void timerRun();


#endif /* INC_SOFTWARE_TIMER_H_ */
