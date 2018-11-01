//
//  Queue.c
//  BinarySearchTree
//
//  Created by Dirk on 10/31/18.
//  Copyright © 2018 Dirk. All rights reserved.
//

#include "Queue.h"

Queue* createQueue() {
	Queue* temp = (Queue*)malloc(sizeof(Queue));
	
	temp->head = NULL;
	temp->tail = NULL;
	
	return temp;
}

qNode* createNode(int value) {
	qNode *newNode = malloc(sizeof(qNode));
	
	newNode->key = value;
	newNode->next = NULL;
	
	return newNode;
}

void enQueue(Queue* queue, int value) {
	
	qNode *temp = createNode(value);
	
	if (queue->tail == NULL) {
		queue->head = temp;
		queue->tail = temp;
	}
	
	queue->tail->next = temp;
	queue->tail = temp;
	
}

qNode* deQueue(Queue* queue) {
	
	//There is nothing next in the queue it will be empty
	if (queue->head == NULL) {
		return NULL;
	}
	
	//Store removed node and move the head down
	qNode *temp = queue->head;
	queue->head = queue->head->next;
	
	//If the head is empty the tail must be empty
	if (queue->head == NULL) {
		queue->tail = NULL;
	}
	
	return temp;
}
