//
//  BinarySearchTree.c
//  BinarySearchTree
//
//  Created by Dirk on 10/24/18.
//  Copyright © 2018 Dirk. All rights reserved.
//

#include "BinarySearchTree.h"

Tree *add(Tree *node, int value) {
	if (node == NULL) {
		node = (Tree*) malloc(sizeof (Tree));
		if (node == NULL) {
			return NULL;
		}
		
		node->left = NULL;
		node->right = NULL;
		node->value = value;
		
		return node;
	}
	if (node->value > value) {
		node->left = add(node->left, value);
	} else {
		node->right = add(node->right, value);
	}
	
	return node;
}

void freeTree(Tree* node) {
	if (node == NULL) {
		return;
	}
	freeTree(node->left);
	freeTree(node->right);
	free(node);
}

Tree* delete(Tree *node, int value) {
	Tree *temp = NULL;
	if (node == NULL) {
		return NULL;
	}
	
	if (value < node->value) {
		node->left = delete(node->left, value);
	} else {
		
	}
	
	return temp;
}
