/*
 * LList.c
 *
 *  Created on: Nov 24, 2023
 *      Author: Admin
 */
#include "LList.h"

struct Node* createNode(int taskID, int data){
	struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
	if(!newNode){
		//TODO
	}
	newNode->taskID = taskID;
	newNode->data = data;
	newNode->nextNode = NULL;
	return newNode;
};

void addTask(struct Node** head, int taskID, int data){
	struct Node* newNode = createNode(taskID, data);
	// add the first node
	if(*head == NULL){
		*head = newNode;
		return;
	}

	//add the node at the first position
	struct Node* temp = *head;
	if( newNode->data < temp->data){
		temp->data -= newNode->data;
		newNode->nextNode = temp;
		*head = newNode;
		return;
	}

	//add the node at other position
	newNode->data -= temp->data;

	while(temp->nextNode != NULL && newNode->data >= temp->nextNode->data){
		temp = temp->nextNode;
		newNode->data -= temp->data;
	}
	if(temp->nextNode == NULL){
		temp->nextNode = newNode;
	}else{
		newNode->nextNode = temp->nextNode;
		temp->nextNode = newNode;
	}
};
// only deleteTask at the first position
void deleteTask(struct Node** head){
	if(head == NULL) return;
	struct Node* temp = *head;
	*head = temp->nextNode;
	if((*head) != NULL) (*head)->data += temp->data;
	free(temp);
};

void clearList(struct Node** head){
	if(*head == NULL) return;
	struct Node* temp = *head;
	clearList(&temp->nextNode);
	free(temp);
	*head = NULL;
}

void deleteTaskID(struct Node** head, int taskID){
	struct Node* temp = *head;
	if(temp == NULL) return;

	//if the delete node is also the first node
	if(temp->taskID == taskID){
		deleteTask(head);
		return;
	}

	//if the delete node is not the first node
	while(temp->nextNode != NULL && temp->nextNode->taskID != taskID){
		temp = temp->nextNode;
	}
	if(temp->nextNode == NULL) return;
	struct Node* deleteNode = temp->nextNode;
	temp->nextNode = deleteNode->nextNode;
	if(temp->nextNode != NULL) temp->nextNode->data += deleteNode->data;
	free(deleteNode);
}

