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
	
	temp->front = NULL;
	temp->rear = NULL;
	
	return temp;
}
