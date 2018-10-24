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

typedef struct node {
	int value;
	struct node * left;
	struct node * right;
} Tree;

Tree *add(Tree*, int);
void freeTree(Tree*);
Tree *delete(Tree*, int);

#endif /* BinarySearchTree_h */
