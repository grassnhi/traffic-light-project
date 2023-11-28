/*
 * global.c
 *
 *  Created on: Nov 9, 2023
 *      Author: PC
 */

#include "main.h"

int status = INIT;
int ped_status = INIT;
int current_state;
int turn_state = INIT;

int RED = 5;
int AMBER = 2;
int GREEN = 3;

int counter1 = 0;
int counter2 = 0;
int counter = 0;

char str[50];
uint8_t temp = 0;