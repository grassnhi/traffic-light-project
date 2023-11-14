/*
 * USART.c
 *
 *  Created on: Nov 14, 2023
 *      Author: PC
 */

#include <usart.h>
#include "stdio.h"
#include "global.h"

void displayUART(int counter, UART_HandleTypeDef huart2) {
	int t = counter / 10;
	int u = counter % 10;
	HAL_UART_Transmit(&huart2, (void*)str, sprintf(str, "!7SEG=%u%u#\r\n", t, u), 1000);
}
