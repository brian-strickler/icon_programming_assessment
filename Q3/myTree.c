#include "myTree.h"
#include <stdio.h>
#include <stdlib.h>

// Creates a new node
struct node *createNode(int value) {
	// Memory allocation for new node
	struct node* newNode = malloc(sizeof(struct node));
	
	if (newNode != NULL) {
		// Assign value to node
		newNode->value = value;
		
		// Set left and right branches to point to NULL
		newNode->left = NULL;
		newNode->right = NULL;
	}
	return newNode;
}

// Inserts node into binary tree
void insert(struct node* root, int value) {
	struct node *current;
	struct node *parent;
	current = root;
	
	while(1) {
		parent = current;
		
		// New node is less than current nodes value
		if ((parent->value) > value) {
			current = current->left;
			// Insert node if no other node exists to the left
			if (current == NULL) {
				parent->left = createNode(value);
				return;
			}
		}
		// New node is greater than current nodes value
		else if ((parent->value) < value) {
			current = current->right;
			// Insert node if no other node exist to the right
			if (current == NULL) {
				parent->right = createNode(value);
				return;
			}
		}
		// Current node value is equal to value being passed in, discard value
		else {
			return;
		}
	
	}	
}

// Prints values from binary tree
void printTree(struct node* node) {
	if (node == NULL) {
		return;
	}
	// Recur on left branch
	printTree(node->left);
	// Print value
	printf("%d\n", node->value);
	// Recur on right branch
	printTree(node->right);	
}

// Deletes nodes in binary tree 
void deleteTree(struct node* node) {
	if (node == NULL) {
		return;
	}
	// Recursively delete nodes
	deleteTree(node->left);
	deleteTree(node->right);
	// Free memory
	free(node);
}
