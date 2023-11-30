/*
 * LList.h
 *
 *  Created on: Nov 24, 2023
 *      Author: Admin
 */

#ifndef INC_TIMER_LLIST_H_
#define INC_TIMER_LLIST_H_
#include "main.h"
#include <stdio.h>
#include <stdlib.h>

#define SCH_MAX_TASKS			6

struct Node{
	int data;
	int taskID;
	struct Node* nextNode;
};

struct Node* createNode(int taskID, int data);
void addTask(struct Node** head, int taskID, int data);
void deleteTask(struct Node** head);
void deleteTaskID(struct Node** head, int taskID);
void clearList(struct Node** head);
//uint8_t findTask(CALLBACK callback);

#endif /* INC_TIMER_LLIST_H_ */
