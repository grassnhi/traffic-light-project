/*
 * fsm_mode.c
 *
 *  Created on: Oct 22, 2023
 *      Author: PC
 */

#include "fsm_automatic.h"

void fsm_automatic_init(int color){
	switch(color){
	case GREEN1:
		counter1 = GREEN;
		counter2 = RED;
		current_state = GREEN1;
		setTimer(0, 1000);
		setTimer(4, TIME_CYCLE);
		break;
	case AMBER1:
		counter1 = RED - GREEN;
		current_state = AMBER1;
		setTimer(0, 1000);
		setTimer(4, TIME_CYCLE);
		break;
	case GREEN2:
		counter1 = RED;
		counter2 = GREEN;
		current_state = GREEN2;
		setTimer(0, 1000);
		setTimer(4, TIME_CYCLE);
		break;
	case AMBER2:
		counter2 = RED - GREEN;
		current_state = AMBER2;
		setTimer(0, 1000);
		setTimer(4, TIME_CYCLE);
		break;
	default:
		break;
	}
}

void fsm_automatic_run() {
	switch(current_state){

	case GREEN2:
		traffic_light(GREEN2);

		if (counter1 <= 0 || counter2 <= 0) {
			fsm_automatic_init(AMBER2);
		}
		break;

	case AMBER2:
		traffic_light(AMBER2);

		if (counter1 <= 0 || counter2 <= 0) {
			fsm_automatic_init(GREEN1);
		}
		break;

	case GREEN1:
		traffic_light(GREEN1);

		if (counter1 <= 0 || counter2 <= 0) {
			fsm_automatic_init(AMBER1);
		}
		break;

	case AMBER1:
		traffic_light(AMBER1);

		if (counter1 <= 0 || counter2 <= 0) {
			fsm_automatic_init(GREEN2);
		}
		break;

	default:
		break;
	}
	if (getFlagTimer(0) == 1){
		counter1--;
		counter2--;
		displayUART(counter1,counter2, huart2);
		setTimer(0, 1000);
	}
}
