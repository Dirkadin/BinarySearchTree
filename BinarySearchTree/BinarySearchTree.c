//
//  BinarySearchTree.c
//  BinarySearchTree
//
//  Created by Dirk on 10/24/18.
//  Copyright © 2018 Dirk. All rights reserved.
//

#include "BinarySearchTree.h"

//Adds a new value to the tree
Tree* add(Tree *node, int value) {
	//If the node doesn't exist add new node and allocate memory
	if (node == NULL) {
		node = (Tree*) malloc(sizeof (Tree));
		if (node == NULL) { //Legacy: make sure malloc was able to allocate memeory
			return NULL;
		}
		
		//Assign values to new node
		node->left = NULL;
		node->right = NULL;
		node->value = value;
		node->counter = 1;
		
		return node;
	}
	//Add new node to correct side
	if (node->value == value) {
		node->counter++;
		return node;
	}
	if (node->value > value) {
		node->left = add(node->left, value);
	} else {
		node->right = add(node->right, value);
	}
	
	return node;
}

//Frees all of the allocated memory for the tree
void freeTree(Tree* node) {
	//Yer done
	if (node == NULL) {
		return;
	}
	
	//Recursively free da tree
	freeTree(node->left);
	freeTree(node->right);
	
	//Free yoself
	free(node);
}

//Deletes a node with a given value
Tree* delete(Tree *node, int value) {
	Tree *temp = NULL;
	
	//If node is null return null
	if (node == NULL) {
		return NULL;
	}
	
	//If the node value and delete value are the same, decrement counter
	if (node->value == value) {
		if (node->counter > 1) {
			node->counter--;
			return node;
		}
	}
	
	//If value is less than current node delete left
	if (value < node->value) {
		
		node->left = delete(node->left, value);
		
	} else if (value > node->value) { //If value is greater, delete right
		
		node->right = delete(node->right, value);
		
	} else if (node->left && node->right) { //If both pointers are populated - even case
		
		temp = findMin(node->right); //Find smallest node on the right
		node->value = temp->value; //Move smallest node up
		node->right = delete(node->right, node->value); //deleted right node
		
	} else if (node->left == NULL) { //Null checking
		node = node->right;
		
	} else if (node->right == NULL) {
		node = node->left;
	}
	
	free(temp); //Free that memory my dude
	
	return node;
}

//Finds the lowest value in the tree
Tree* findMin(Tree *node) {
	//If node is null return the sent node
	if (node == NULL) {
		return node;
	}
	
	//If left node is null return sent node
	if (node->left == NULL) {
		return node;
	}
	
	//Recursion left until we find null
	return findMin(node->left);
}

//Finds the loweset level in the tree
int findDepth(Tree *node) {
	
	//Don't incrememnt if node is NULL
	if (node == NULL) {
		return 0;
	}
	
	//Recursively find dept for each child
	int left = findDepth(node->left);
	int right = findDepth(node->right);
	
	//Return added up depth
	if (left > right) {
		return left + 1;
	} else {
		return right + 1;
	}
}

void traversePreOrder(Tree* node) {
	if (node != NULL) {
		printf("%d X %d\n", node->value, node->counter);
		traversePreOrder(node->left);
		traversePreOrder(node->right);
	}
}

void traversePostOrder(Tree* node) {
	if (node != NULL) {
		traversePostOrder(node->left);
		traversePostOrder(node->right);
		printf("%d X %d\n", node->value, node->counter);
	}
}
