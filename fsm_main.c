/*
 * fsm_main.c
 *
 *  Created on: Nov 20, 2023
 *      Author: Admin
 */
#include "fsm_main.h"

void fsm(){

	switch(status){
	case INIT:
		fsm_automatic_init();
		traffic_light(INIT);
		ped_status = PED_OFF;
		clearAllTimer();
		fsm_automatic_init(GREEN2);
		status = AUTO;
		
		break;
	case AUTO:
		fsm_automatic_run();
		fsm_pedestrian_run();
		if(isButtonPressed(0) == 1){
			clearAllTimer();
			status = MANUAL;
		}
		break;
	case MANUAL:
		fsm_manual_run();
		if(isButtonPressed(0) == 1){
			clearAllTimer();
			set_blinky(INIT);
			setTimer(3, 500);
			status = TURNING;
			turn_state = AUTO_AMBER;

		}else if(isButtonPressed(2) == 1){
			status = AUTO;
			fsm_automatic_init(current_state);
		}
		break;
	case TURNING:
		fsm_turning_run(turn_state);
		if(isButtonPressed(0) == 1){
			if(turn_state == AUTO_AMBER){
				turn_state = AUTO_GREEN;
			}else{
				status = INIT;
			}
		}
		break;
}
}
