/*
 * timer_sched.h
 *
 *  Created on: Nov 29, 2023
 *      Author: Admin
 */

#ifndef INC_SCHED_LLIST_H_
#define INC_SCHED_LLIST_H_
#include "main.h"
#include <stdio.h>
#include <stdlib.h>

typedef void (*CALLBACK)(void);

typedef struct{
	CALLBACK callback;

	uint16_t Delay;

	uint16_t Period;

	uint8_t Runme;

	uint32_t taskID;

}Task_TypeDef_t;

#define NO_TASK_ID				0

struct SCH_Node{
	Task_TypeDef_t data;
	struct SCH_Node* nextNode;
};

struct SCH_Node* SCHcreateNode(Task_TypeDef_t data);
void SCHaddTask(struct SCH_Node** head, Task_TypeDef_t data);
void SCHdeleteTask(struct SCH_Node** head);
void SCHdeleteTaskID(struct SCH_Node** head, uint8_t taskID);
void SCHclearList(struct SCH_Node* head);
//uint8_t findTask(CALLBACK callback);


#endif /* INC_SCHED_LLIST_H_ */
