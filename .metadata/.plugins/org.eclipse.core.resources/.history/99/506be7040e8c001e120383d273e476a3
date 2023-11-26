/*
 * USART.c
 *
 *  Created on: Nov 14, 2023
 *      Author: PC
 */


#include "stdio.h"
#include "main.h"

void displayUART(int counter, UART_HandleTypeDef huart2) {
	int t = counter / 10;
	int u = counter % 10;
	sprintf(str, "!7SEG1=%d#\r\n", counter);
	HAL_UART_Transmit(&huart2, (void*)str, sizeof(str), 1000);
}
