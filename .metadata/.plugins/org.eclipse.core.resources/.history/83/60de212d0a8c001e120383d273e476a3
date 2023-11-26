/*
 * fsm_pedestrian.c
 *
 *  Created on: Nov 25, 2023
 *      Author: PC
 */

#include "fsm_pedestrian.h"

int timePedestrianLight;

void fsm_pedestrian_run() {
	switch(ped_status) {
	case PED_OFF:
		buzzerStop();
		//pedestrian_light(PED_OFF);
		if (isButtonPressed(3)==1) {
			HAL_GPIO_TogglePin(PLIGHT2_GPIO_Port, PLIGHT2_Pin);
			//HAL_GPIO_WritePin(PLIGHT2_GPIO_Port, PLIGHT2_Pin, SET);
			setTimer(1, 5000);
			if (current_state == GREEN2 || current_state == AMBER2)
				ped_status = PED_RED;

			else
				ped_status = PED_GREEN;
			timePedestrianLight = PEDESTRIAN_DURATION;
		}
		break;
	case PED_RED:
		buzzerStop();
		//pedestrian_light(PED_RED);

		if (current_state == GREEN1 || current_state == AMBER1)
			ped_status = PED_GREEN;
		if (timer_flag[1] == 1){
			ped_status = PED_OFF;
			//HAL_GPIO_WritePin(PLIGHT1_GPIO_Port, PLIGHT1_Pin, RESET);
			//HAL_GPIO_WritePin(PLIGHT2_GPIO_Port, PLIGHT2_Pin, RESET);
		}
		break;
	case PED_GREEN:
		pedestrian_light(PED_GREEN);
		if (counter1 <= 3)
			buzzerRun();
		if (current_state == GREEN2 || current_state == AMBER2)
			ped_status = PED_RED;
		if (timer_flag[1] == 1){
			ped_status = PED_OFF;
			HAL_GPIO_WritePin(PLIGHT1_GPIO_Port, PLIGHT1_Pin, RESET);
			HAL_GPIO_WritePin(PLIGHT2_GPIO_Port, PLIGHT2_Pin, RESET);
		}
		break;
	}
}
