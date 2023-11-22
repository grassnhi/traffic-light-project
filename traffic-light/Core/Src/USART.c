/*
 * USART.c
 *
 *  Created on: Nov 14, 2023
 *      Author: PC
 */


#include "stdio.h"
#include "main.h"

void displayUART1(int counter, UART_HandleTypeDef huart2) {
	int t = counter / 10;
	int u = counter % 10;
	HAL_UART_Transmit(&huart2, (void*)str, sprintf(str, "!7SEG1=%u%u#\r\n", t, u), 1000);
}

void displayUART2(int counter, UART_HandleTypeDef huart2) {
	int t = counter / 10;
	int u = counter % 10;
	HAL_UART_Transmit(&huart2, (void*)str, sprintf(str, "!7SEG2=%u%u#\r\n", t, u), 1000);
}
