/*
 * fsm_manual.c
 *
 *  Created on: Nov 20, 2023
 *      Author: Admin
 */
/*
 * manual_mode.c
 *
 *  Created on: Nov 13, 2023
 *      Author: Admin
 */
#include "fsm_manual.h"

void fsm_manual_run(){
	switch(current_state){
	case GREEN1:
		traffic_light(GREEN1);
		if(isButtonPressed(1)){
			current_state = AMBER1;
		}
		break;
	case AMBER1:
		traffic_light(AMBER1);
		if(isButtonPressed(1)){
			current_state = GREEN2;
		}
		break;
	case GREEN2:
		traffic_light(GREEN2);
		if(isButtonPressed(1)){
			current_state = AMBER2;
		}
		break;
	case AMBER2:
		traffic_light(AMBER2);
		if(isButtonPressed(1)){
			current_state = GREEN1;
		}
		break;
	}
};
