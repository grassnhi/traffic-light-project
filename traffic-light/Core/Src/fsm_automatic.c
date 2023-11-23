/*
 * fsm_mode.c
 *
 *  Created on: Oct 22, 2023
 *      Author: PC
 */

#include "main.h"

void fsm_automatic_init(){
	current_state = RED1_GREEN2;
	counter1 = RED;
	counter2 = GREEN;
}

void fsm_automatic_run() {
	switch(current_state){

	case GREEN2:
		traffic_light(GREEN2);

		if (timer_flag[0] == 1) {
			counter2 = RED - GREEN;
			current_state = AMBER2;
			setTimer(0, counter2 * 1000);
		}
		if (timer_flag[2] == 1) {
			displayUART(counter1, huart2);
			displayUART(counter2, huart2);
		}
		if(isButtonPressed(0)){
			current_state = GREEN2;
		}
		if(isButtonPressed(3)){
			current_state = PED_RED;
		}
		break;

	case AMBER2:
		traffic_light(AMBER2);

		if (timer_flag[0] == 1) {
			counter1 = GREEN;
			counter2 = RED;
			current_state = GREEN1;
			setTimer(0, counter1 * 1000);
		}
		if (timer_flag[2] == 1) {
			displayUART(counter1, huart2);
			displayUART(counter2, huart2);
		}
		if(isButtonPressed(0)){
			current_state = AMBER2;
		}
		if(isButtonPressed(3)){
			current_state = PED_RED;
		}
		break;

	case GREEN1:
		traffic_light(GREEN1);

		if (timer_flag[0] == 1) {
			status = AMBER1;
			counter1 = RED - GREEN;
			current_state = AMBER1;
			setTimer(0, counter1 * 1000);
		}
		if (timer_flag[2] == 1) {
			displayUART(counter1, huart2);
			displayUART(counter2, huart2);
		}
		if(isButtonPressed(0)){
			current_state = GREEN1;
		}
		if(isButtonPressed(3)){
			current_state = PED_GREEN;
		}
		break;

	case AMBER1:
		traffic_light(AMBER1);

		if (timer_flag[0] == 1) {
			status = GREEN2;
			counter1 = RED;
			counter2 = GREEN;
			current_state = GREEN2;
			setTimer(0, counter2 * 1000);
		}
		if (timer_flag[2] == 1) {
			displayUART(counter1, huart2);
			displayUART(counter2, huart2);
		}
		if(isButtonPressed(0)){
			current_state = AMBER1;
		}
		if(isButtonPressed(3)){
			current_state = PED_GREEN;
		}
		break;

	default:
		break;
	}
}

