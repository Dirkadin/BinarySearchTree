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
	
	int myNums[] = {2, 4, 3, 4, 4};
	for (i = 0; i < 5; i++) {
		tree = add(tree, myNums[i]);
	}
	
//	delete(tree, 1);
	
	delete(tree, 4);
	delete(tree, 4);
	delete(tree, 4);
	
	int min = findMin(tree)->value;
	
	int depth = findDepth(tree);
	
	printf("Depth: %d\nMin: %d\n", depth, min);
	

	freeTree(tree);
	
	return 0;
}
