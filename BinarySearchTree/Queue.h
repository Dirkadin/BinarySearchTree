//
//  Queue.h
//  BinarySearchTree
//
//  Created by Dirk on 10/31/18.
//  Copyright © 2018 Dirk. All rights reserved.
//

#ifndef Queue_h
#define Queue_h

#include <stdio.h>
#include <stdlib.h>

typedef struct qNode {
	int key;
	struct qNode *next;
}qNode;

typedef struct Queue {
	qNode *head;
	qNode *tail;
} Queue;

Queue* createQueue(void);
qNode* createNode(int);
void enQueue(Queue*,int);
qNode* deQueue(Queue*);

#endif /* Queue_h */
