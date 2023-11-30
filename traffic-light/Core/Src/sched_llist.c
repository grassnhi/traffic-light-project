/*
 * timer_sched.c
 *
 *  Created on: Nov 29, 2023
 *      Author: Admin
 */
#include "sched_llist.h"

struct SCH_Node* SCHcreateNode(Task_TypeDef_t data){
	struct SCH_Node* newNode = (struct SCH_Node*)malloc(sizeof(struct Node));
	if(!newNode){
		//TODO
	}
	newNode->data.callback = data.callback;
	newNode->data.Delay = data.Delay;
	newNode->data.Period = data.Period;
	newNode->data.Runme = data.Runme;
	newNode->data.taskID = data.taskID;
	newNode->nextNode = NULL;
	return newNode;
};

void SCHaddTask(struct SCH_Node** head, Task_TypeDef_t data){
	struct SCH_Node* newNode = SCHcreateNode(data);
	if(*head == NULL){
		*head = newNode;
		return;
	}
	struct SCH_Node* temp = *head;
	if( newNode->data.Delay < temp->data.Delay){
		temp->data.Delay -= newNode->data.Delay;
		newNode->nextNode = temp;
		*head = newNode;
		return;
	}

	newNode->data.Delay -= temp->data.Delay;
	//printf("newNode: %d\n", newNode->data.Delay);
	while(temp->nextNode != NULL && newNode->data.Delay >= temp->nextNode->data.Delay){
		temp = temp->nextNode;
		newNode->data.Delay -= temp->data.Delay;
		//printf("newNode: %d\n", newNode->data.Delay);
	}
	if(temp->nextNode == NULL){
		temp->nextNode = newNode;
	}else{
		newNode->nextNode = temp->nextNode;
		temp->nextNode = newNode;
	}
};

void SCHdeleteTask(struct SCH_Node** head){
	if(head == NULL) return;
	struct SCH_Node* temp = *head;
	*head = temp->nextNode;
	free(temp);
};

void SCHclearList(struct SCH_Node* head){
	if(head == NULL) return;
	SCHclearList(head->nextNode);
	free(head);
	head = NULL;
}