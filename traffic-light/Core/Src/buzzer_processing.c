/*
 * buzzer_processing.c
 *
 *  Created on: Nov 25, 2023
 *      Author: PC
 */

#include "buzzer_processing.h"
#include "note.h"

int	pitch = 0;
int cnt = 0;

const int soundDuration[] = {
	250, 125, 80, 60, 60
};

void buzzerRun() {
	if (getFlagTimer(4)) {
			setTimer(4, soundDuration[3-counter1]);
			pitch = 500 - pitch;
			__HAL_TIM_SET_AUTORELOAD(&htim3, pitch);
			__HAL_TIM_SET_COMPARE(&htim3, TIM_CHANNEL_1, 60);
	}
}

void buzzerStop() {
	pitch = 0;
	cnt = 0;
	__HAL_TIM_SET_AUTORELOAD(&htim3, pitch);
	__HAL_TIM_SET_COMPARE(&htim3, TIM_CHANNEL_1, 0);
}

//int sound [] = {
//	NOTE_E7, NOTE_E7, 0, NOTE_E7,
//	0, NOTE_C7, NOTE_E7, 0,
//	NOTE_G7, 0, 0,  0,
//	NOTE_G6, 0, 0, 0,
//
//	NOTE_C7, 0, 0, NOTE_G6,
//	0, 0, NOTE_E6, 0,
//	0, NOTE_A6, 0, NOTE_B6,
//	0, NOTE_AS6, NOTE_A6, 0,
//
//	NOTE_G6, NOTE_E7, NOTE_G7,
//	NOTE_A7, 0, NOTE_F7, NOTE_G7,
//	0, NOTE_E7, 0, NOTE_C7,
//	NOTE_D7, NOTE_B6, 0, 0,
//
//	NOTE_C7, 0, 0, NOTE_G6,
//	0, 0, NOTE_E6, 0,
//	0, NOTE_A6, 0, NOTE_B6,
//	0, NOTE_AS6, NOTE_A6, 0,
//
//	NOTE_G6, NOTE_E7, NOTE_G7,
//	NOTE_A7, 0, NOTE_F7, NOTE_G7,
//	0, NOTE_E7, 0, NOTE_C7,
//	NOTE_D7, NOTE_B6, 0, 0
//};
//
//const int soundDuration[] = {
//  12, 12, 12, 12,
//  12, 12, 12, 12,
//  12, 12, 12, 12,
//  12, 12, 12, 12,
//
//  12, 12, 12, 12,
//  12, 12, 12, 12,
//  12, 12, 12, 12,
//  12, 12, 12, 12,
//
//  9, 9, 9,
//  12, 12, 12, 12,
//  12, 12, 12, 12,
//  12, 12, 12, 12,
//
//  12, 12, 12, 12,
//  12, 12, 12, 12,
//  12, 12, 12, 12,
//  12, 12, 12, 12,
//
//  9, 9, 9,
//  12, 12, 12, 12,
//  12, 12, 12, 12,
//  12, 12, 12, 12
//};
//
//const int duration = sizeof(sound)/sizeof(sound[0]);
//
//void buzzerRun() {
//	if (getFlagTimer(4)) {
//		setTimer(4, soundDuration[cnt]*10);
//		__HAL_TIM_SET_AUTORELOAD(&htim3, 1000000/sound[cnt]);
//		__HAL_TIM_SET_COMPARE(&htim3, TIM_CHANNEL_1, 15);
//		cnt++;
//		if (cnt >= duration)
//			cnt = 0;
//	}
//}

//int sound[] = {
//	NOTE_D4, NOTE_G4, NOTE_FS4, NOTE_A4,
//	NOTE_G4, NOTE_C5, NOTE_AS4, NOTE_A4,
//	NOTE_FS4, NOTE_G4, NOTE_A4, NOTE_FS4, NOTE_DS4, NOTE_D4,
//	NOTE_C4, NOTE_D4,0,
//
//	NOTE_D4, NOTE_G4, NOTE_FS4, NOTE_A4,
//	NOTE_G4, NOTE_C5, NOTE_D5, NOTE_C5, NOTE_AS4, NOTE_C5, NOTE_AS4, NOTE_A4,      //29               //8
//	NOTE_FS4, NOTE_G4, NOTE_A4, NOTE_FS4, NOTE_DS4, NOTE_D4,
//	NOTE_C4, NOTE_D4,0,
//
//	NOTE_D4, NOTE_FS4, NOTE_G4, NOTE_A4, NOTE_DS5, NOTE_D5,
//	NOTE_C5, NOTE_AS4, NOTE_A4, NOTE_C5,
//	NOTE_C4, NOTE_D4, NOTE_DS4, NOTE_FS4, NOTE_D5, NOTE_C5,
//	NOTE_AS4, NOTE_A4, NOTE_C5, NOTE_AS4,             //58
//
//	NOTE_D4, NOTE_FS4, NOTE_G4, NOTE_A4, NOTE_DS5, NOTE_D5,
//	NOTE_C5, NOTE_D5, NOTE_C5, NOTE_AS4, NOTE_C5, NOTE_AS4, NOTE_A4, NOTE_C5, NOTE_G4,
//	NOTE_A4, 0, NOTE_AS4, NOTE_A4, 0, NOTE_G4,
//	NOTE_G4, NOTE_A4, NOTE_G4, NOTE_FS4, 0,
//
//	NOTE_C4, NOTE_D4, NOTE_G4, NOTE_FS4, NOTE_DS4,
//	NOTE_C4, NOTE_D4, 0,
//	NOTE_C4, NOTE_D4, NOTE_G4, NOTE_FS4, NOTE_DS4,
//	NOTE_C4, NOTE_D4
//};
//
//const int soundDuration[] = {
//  8,4,8,4,
//  4,4,4,12,
//  4,4,4,4,4,4,
//  4,16,4,
//
//  8,4,8,4,
//  4,2,1,1,2,1,1,12,
//  4,4,4,4,4,4,
//  4,16,4,
//
//  4,4,4,4,4,4,
//  4,4,4,12,
//  4,4,4,4,4,4,
//  4,4,4,12,
//
//  4,4,4,4,4,4,
//  2,1,1,2,1,1,4,8,4,
//  2,6,4,2,6,4,
//  2,1,1,16,4,
//
//  4,8,4,4,4,
//  4,16,4,
//  4,8,4,4,4,
//  4,20,
//};
//
//const int duration = sizeof(sound)/sizeof(sound[0]);
//
//void buzzerRun() {
//	if (getFlagTimer(4)) {
//		setTimer(4, soundDuration[cnt]*100);
//		__HAL_TIM_SET_AUTORELOAD(&htim3, sound[cnt]);
//		__HAL_TIM_SET_COMPARE(&htim3, TIM_CHANNEL_1, 15);
//		cnt++;
//		if (cnt >= duration)
//			cnt = 0;
//	}
//}
