/*
 * input_reading.c
 *
 *  Created on: Nov 9, 2023
 *      Author: PC
 */

#include "main.h"

#define NO_OF_BUTTONS					4
#define DURATION_FOR_AUTO_INCREASING	100
#define BUTTON_IS_PRESSED				GPIO_PIN_RESET
#define BUTTON_IS_RELEASED				GPIO_PIN_SET

static int KeyReg0[NO_OF_BUTTONS];
static int KeyReg1[NO_OF_BUTTONS];
static int KeyReg2[NO_OF_BUTTONS];
static int KeyReg3[NO_OF_BUTTONS];
static GPIO_TypeDef* BUTTON_PORT[NO_OF_BUTTONS] = {BT0_GPIO_Port, BT1_GPIO_Port, BT2_GPIO_Port, BT3_GPIO_Port};
static uint16_t BUTTON_PIN[NO_OF_BUTTONS] = {BT0_Pin, BT1_Pin, BT2_Pin, BT3_Pin};
static int TimeOutForKeyPress[NO_OF_BUTTONS];
static int button_flag[NO_OF_BUTTONS];

void buttonInit(){
	for(int i = 0; i < NO_OF_BUTTONS; i++){
		KeyReg0[i] = NORMAL_STATE;
		KeyReg1[i] = NORMAL_STATE;
		KeyReg2[i] = NORMAL_STATE;
		KeyReg3[i] = NORMAL_STATE;

		TimeOutForKeyPress[i] =  500;
		button_flag[i] = 0;
	}
}

int isButtonPressed(int index){
	if(index >= NO_OF_BUTTONS){
		return 0;
	}
	if(button_flag[index] == 1){
		button_flag[index] = 0;
		return 1;
	}
	return 0;
}

void subKeyProcess(int index){
	button_flag[index] = 1;
}

void getKeyInput(){
	for(int i = 0; i < NO_OF_BUTTONS; i++){
		KeyReg2[i] = KeyReg1[i];
		KeyReg1[i] = KeyReg0[i];
		//Add your button here
		KeyReg0[i] = HAL_GPIO_ReadPin(BUTTON_PORT[i], BUTTON_PIN[i]);

		if ((KeyReg1[i] == KeyReg0[i]) && (KeyReg1[i] == KeyReg2[i])){
		if (KeyReg2[i] != KeyReg3[i]){
		  KeyReg3[i] = KeyReg2[i];

		  if (KeyReg3[i] == PRESSED_STATE){
			TimeOutForKeyPress[i] = DURATION_FOR_AUTO_INCREASING;
			subKeyProcess(i);
		  }
		}
		}
	}

}


