/*
 * global.h
 *
 *  Created on: Nov 9, 2023
 *      Author: PC
 */

#ifndef INC_GLOBAL_H_
#define INC_GLOBAL_H_

#include "main.h"

#define INIT				0
#define AUTO				1
#define MANUAL				2
#define TURNING				3

#define AUTO_AMBER			31
#define ADJ_AMBER			32
#define AUTO_GREEN			33
#define ADJ_GREEN			34

#define PED_OFF             40
#define PED_GREEN			41
#define PED_RED				42

#define GREEN1			    51
#define AMBER1			    52
#define GREEN2			    53
#define	AMBER2			    54

extern int status;
extern int ped_status;
extern int current_state;
extern int turn_state;

extern int RED;
extern int AMBER;
extern int GREEN;

extern int counter1;
extern int counter2;
extern int counter;

extern char str[50];
extern uint8_t temp;

#endif /* INC_GLOBAL_H_ */