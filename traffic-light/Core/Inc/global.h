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

#define MODE1				1
#define RED1_GREEN2	        11
#define RED1_AMBER2	        12
#define GREEN1_RED2	        13
#define	AMBER1_RED2	        14

#define MODE2				2
#define MAN_GREEN1			21
#define MAN_AMBER1			22
#define MAN_GREEN2			23
#define	MAN_AMBER2			24

#define MODE3				3
#define AUTO_AMBER			31
#define ADJ_AMBER			32
#define AUTO_GREEN			33
#define ADJ_GREEN			34

#define PED_OFF             41
#define PED_GREEN			42
#define PED_RED				43

#define GREEN1			    51
#define AMBER1			    52
#define GREEN2			    53
#define	AMBER2			    54

extern int status;
extern int ped_status;
extern int current_state;

extern int RED;
extern int AMBER;
extern int GREEN;

extern int counter1;
extern int counter2;
extern int counter;

extern char str[50];
extern uint8_t temp;

#endif /* INC_GLOBAL_H_ */
