//
//  main.c
//  BinarySearchTree
//
//  Created by Dirk on 10/24/18.
//  Copyright © 2018 Dirk. All rights reserved.
//

#include <stdio.h>
#include "BinarySearchTree.h"
#include "Queue.h"

int main(int argc, const char * argv[]) {
	
//	Tree* tree = NULL;
//	int i;
//
//	int myNums[] = {14, 4, 15, 18, 3, 9, 7, 5, 16, 20, 17};
//	for (i = 0; i < 11; i++) {
//		tree = add(tree, myNums[i]);
//	}
//
//	traverseInOrder(tree);
//
//	freeTree(tree);
	
	Queue* myQueue = createQueue();
	
	enQueue(myQueue, 1);
	enQueue(myQueue, 2);
	enQueue(myQueue, 3);
	enQueue(myQueue, 4);
	
	return 0;
}
