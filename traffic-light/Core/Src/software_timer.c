/*
 * software_timer.c
 *
 *  Created on: Nov 9, 2023
 *      Author: PC
 */

#include "software_timer.h"

int TIME_CYCLE = 10; // Time cycle

//int timer_counter[NUM_OF_TIMERS] = {0};
int timer_flag[NUM_OF_TIMERS] = {0};

static struct Node* timer_counter = NULL;

int getFlagTimer(int index){
	if(index >= NUM_OF_TIMERS) return 0;
	if(timer_flag[index] == 1){
		timer_flag[index] = 0;
		return 1;
	}
	return 0;
}


void setTimer(int index, int duration) {
	deleteTaskID(&timer_counter, index);
	addTask(&timer_counter, index, duration/TIME_CYCLE);
	timer_flag[index] = 0;
}

void clearTimer(int index) {
	deleteTaskID(&timer_counter, index);
	timer_flag[index] = 0;
}

void clearAllTimer() {
	void clearList(struct Node** head);
	for(int i = 0; i < NUM_OF_TIMERS; i++){
		timer_flag[i] = 0;
	}
}

void timerRun(){
	if(timer_counter == NULL) return;
	if(timer_counter->data > 0){
		timer_counter->data--;
	}else{
		timer_flag[timer_counter->taskID] = 1;
		deleteTask(&timer_counter);
	}
}
