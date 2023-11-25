/*
 * input_reading.h
 *
 *  Created on: Nov 9, 2023
 *      Author: PC
 */

#ifndef INC_INPUT_READING_H_
#define INC_INPUT_READING_H_

#include "main.h"

#define NORMAL_STATE SET
#define PRESSED_STATE RESET
#define NO_OF_BUTTONS 4
int button_flag[NO_OF_BUTTONS];


void getKeyInput();

/*
 * @param index
 * 0 - button 0
 * 1 - button 1
 * 2 - button 2
 * 3 - button 3
 * this function return 1 if the button is pressed.
 */
int isButtonPressed(int index);

#endif /* INC_INPUT_READING_H_ */
