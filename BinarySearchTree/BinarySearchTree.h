//
//  BinarySearchTree.h
//  BinarySearchTree
//
//  Created by Dirk on 10/24/18.
//  Copyright © 2018 Dirk. All rights reserved.
//

#ifndef BinarySearchTree_h
#define BinarySearchTree_h

#include <stdio.h>
#include <stdlib.h>
//#include "Queue.h"

typedef struct node {
	int value;
	int counter;
	struct node * left;
	struct node * right;
} Tree;

Tree* add(Tree*, int);
void freeTree(Tree*);
Tree* delete(Tree*, int);
Tree* findMin(Tree*);
int findDepth(Tree*);

void traversePreOrder(Tree*);
void traversePostOrder(Tree*);
void traverseInOrder(Tree*);
void traverseLevelOrder(Tree*);

Tree** createQueue(int*, int*);
void enQueue(Tree**, int*, Tree*);
Tree* deQueue(Tree**, int*);

#endif /* BinarySearchTree_h */
