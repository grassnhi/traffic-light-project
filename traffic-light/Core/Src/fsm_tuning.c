/*
 * fsm_mode.c
 *
 *  Created on: Oct 22, 2023
 *      Author: PC
 */

#include "main.h"

void fsm_turning_run(int turn_state) {
	switch(turn_state){

	case AUTO_AMBER:
		

		if (getFlagTimer(3) == 1) {
			setTimer(3, 500);
            set_blinky(AUTO_AMBER);
		}
		if(isButtonPressed(1)){
			turn_state = ADJ_AMBER;
            AMBER++;
            RED++;
            displayUART(AMBER, AMBER, huart2);
		}
		break;

	case ADJ_AMBER:
		if (getFlagTimer(3) == 1) {
			setTimer(3, 500);
            set_blinky(AUTO_AMBER);
		}
		if(isButtonPressed(1)){
			turn_state = ADJ_AMBER;
            AMBER++;
            RED++;
            if(AMBER == 100){
                AMBER = 1;
                RED = AMBER + GREEN;
            }
            displayUART(AMBER, AMBER, huart2);
		}
		if(isButtonPressed(2)){
			turn_state = AUTO_AMBER;
		}
        break;

	case AUTO_GREEN:
		if (getFlagTimer(3) == 1) {
			setTimer(3, 500);
            set_blinky(AUTO_GREEN);
		}
		if(isButtonPressed(1)){
			turn_state = ADJ_GREEN;
            GREEN++;
            RED++;
            displayUART(GREEN, GREEN, huart2);
		}
		break;

	case ADJ_GREEN:
		if (getFlagTimer(3) == 1) {
			setTimer(3, 500);
            set_blinky(AUTO_AMBER);
		}
		if(isButtonPressed(1)){
			turn_state = ADJ_AMBER;
            AMBER++;
            RED++;
            if(AMBER == 100){
                AMBER = 1;
                RED = AMBER + GREEN;
            }
            displayUART(GREEN, GREEN, huart2);
		}
		if(isButtonPressed(2)){
			turn_state = AUTO_GREEN;
		}
        break;

	default:
		break;
	}
}
