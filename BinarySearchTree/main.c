//
//  main.c
//  BinarySearchTree
//
//  Created by Dirk on 10/24/18.
//  Copyright © 2018 Dirk. All rights reserved.
//

#include <stdio.h>
#include "BinarySearchTree.h"

int main(int argc, const char * argv[]) {
	
	Tree* tree = NULL;
	int i;

	int myNums[] = {14, 4, 15, 18, 3, 9, 7, 5, 16, 20, 17};
	for (i = 0; i < 11; i++) {
		tree = add(tree, myNums[i]);
	}
	
//	int myNums[] = {10, 20, 30, 40, 50, 25};
//	for (i = 0; i < 6; i++) {
//		tree = add(tree, myNums[i]);
//	}

//	traverseLevelOrder(tree);

	freeTree(tree);
	
	return 0;
}
