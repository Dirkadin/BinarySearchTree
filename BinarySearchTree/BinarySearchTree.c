//
//  BinarySearchTree.c
//  BinarySearchTree
//
//  Created by Dirk on 10/24/18.
//  Copyright © 2018 Dirk. All rights reserved.
//

#include "BinarySearchTree.h"

//Adds a new value to the tree
Tree *add(Tree *node, int value) {
	//If the node doesn't exist add allocate memory
	if (node == NULL) {
		node = (Tree*) malloc(sizeof (Tree));
		
		//Assign values to new node
		node->left = NULL;
		node->right = NULL;
		node->value = value;
		
		return node;
	}
	//Add new node to correct side
	if (node->value > value) {
		node->left = add(node->left, value);
	} else {
		node->right = add(node->right, value);
	}
	
	return node;
}

//Frees all of the allocated memory for the tree
void freeTree(Tree* node) {
	if (node == NULL) {
		return;
	}
	freeTree(node->left);
	freeTree(node->right);
	free(node);
}

//Deletes a node with a given value
Tree* delete(Tree *node, int value) {
	Tree *temp = NULL;
	
	//If node is null return null
	if (node == NULL) {
		return NULL;
	}
	
	//If value is less than current node delete left
	if (value < node->value) {
		node->left = delete(node->left, value);
	} else if (value > node->value) { //If value is greater, delete right
		node->right = delete(node->right, value);
	} else if (node->left && node->right) {
		temp = findMin(node->right);
	}
	
	return temp;
}

Tree* findMin(Tree *node) {
	if (node == NULL) {
		return NULL;
	}
	if (node->left == NULL) {
		return NULL;
	}
	return findMin(node->left);
}
