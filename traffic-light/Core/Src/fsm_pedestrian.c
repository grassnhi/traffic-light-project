/*
 * fsm_pedestrian.c
 *
 *  Created on: Nov 25, 2023
 *      Author: PC
 */

#include "fsm_pedestrian.h"


static int duration = 0;

void fsm_pedestrian_run() {
	switch(ped_status) {
	case PED_OFF:
		buzzerStop();
		pedestrian_light(PED_OFF);
		duration = RED + GREEN;
		if (isButtonPressed(3)==1) {
			setTimer(1, duration*1000);
			if (current_state == GREEN2 || current_state == AMBER2)
				ped_status = PED_RED;

			else
				ped_status = PED_GREEN;
		}
		break;
	case PED_RED:
		buzzerStop();
		pedestrian_light(PED_RED);
		if (current_state == GREEN1 || current_state == AMBER1)
			ped_status = PED_GREEN;
		if (getFlagTimer(1) == 1){
			ped_status = PED_OFF;
		}
		if(isButtonPressed(3)==1){
			setTimer(1, duration);
		}
		break;
	case PED_GREEN:
		pedestrian_light(PED_GREEN);
		if (counter1 <= 3)
			buzzerRun();
		if (current_state == GREEN2 || current_state == AMBER2)
			ped_status = PED_RED;
		if (getFlagTimer(1) == 1){
			ped_status = PED_OFF;
		}
		if(isButtonPressed(3)==1){
			setTimer(1, duration);
		}
		break;
	}
}
