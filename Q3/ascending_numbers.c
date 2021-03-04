/* 
Title: "ascending_numbers.c"

Function: 	Reads a list of integers from a text file INPUT.TXT and
			stores them in a binary tree. After reading and storing the last 
			number, prints the list of numbers in ascending order.

Author: Brian Strickler
Last Modified: 03/03/2021
*/

#include <stdio.h>
#include <stdlib.h>
#include "myTree.h"

int main(void)
{
	int value;
	FILE* ifile = fopen("INPUT.TXT","r");
	
	// Check if file opened successfully
	if(!ifile) {
		printf("Could not open \"INPUT.TXT\"\n");
		// Exit upon failure to open
		return 1;
	}
	
	// Create root of tree
	fscanf(ifile, "%d", &value);
	struct node* root = createNode(value);
	
	// Add nodes to tree
	while ((fscanf(ifile, "%d", &value)) != EOF) {
		insert(root, value);
	}

	// Close "INPUT.TXT"
	fclose(ifile);	
	
	// Print binary tree in ascending order and free memory
	printTree(root);
	deleteTree(root);
	
	// Exit success
	return 0;
}
