/*
 * fsm_pedestrian.c
 *
 *  Created on: Nov 17, 2023
 *      Author: 84977
 */

#include "fsm_pedestrian.h"

int timePedestrianLight;

void fsm_pedestrian() {
	switch(ped_status) {
	case PED_OFF:
		buzzerStop();
		pedestrian_light(PED_OFF);
		if (check_button_pressed(3)) {
			if (current_state == GREEN2 || current_state == AMBER2)
				ped_status = PED_RED;
			else
				ped_status = PED_GREEN;
			timePedestrianLight = PEDESTRIAN_DURATION;
		}
		break;
	case PED_RED:
		buzzerStop();
		pedestrian_light(PED_RED);
		if (timer_flag[1] == 1)
			timePedestrianLight--;
		if (timePedestrianLight <= 0)
			ped_status = PED_OFF;
		if (current_state == GREEN1 || current_state == AMBER1)
			ped_status = PED_GREEN;
		break;
	case PED_GREEN:
		pedestrian_light(PED_GREEN);
		if (counter1 <= 3)
			buzzerRun();
		if (timer_flag[1] == 1)
			timePedestrianLight--;
		if (timePedestrianLight <= 0)
			ped_status = PED_OFF;
		if (current_state == GREEN2 || current_state == AMBER2)
			ped_status = PED_RED;
		break;
	}
}
