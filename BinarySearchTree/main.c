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
	
	int myNums[] = {4, 7, 3, 1, 8};
	for (i = 0; i < 5; i++) {
		tree = add(tree, myNums[i]);
	}

	freeTree(tree);
	
	return 0;
}
