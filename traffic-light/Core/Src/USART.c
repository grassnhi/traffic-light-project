/*
 * USART.c
 *
 *  Created on: Nov 14, 2023
 *      Author: PC
 */


#include "stdio.h"
#include "main.h"

void displayUART(int counter1, int counter2, UART_HandleTypeDef huart2) {
	sprintf(str, "!7SEG1=%d \t 7SEG2=%d# \r\n", counter1, counter2);
	HAL_UART_Transmit(&huart2, (void*)str, sizeof(str), 100);
}
