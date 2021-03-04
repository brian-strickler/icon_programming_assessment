#ifndef MYTREE_H
#define MYTREE_H

struct node {
	int value;
	struct node *left;
	struct node *right;
}; 

struct node* createNode(int value);
void insert(struct node* root, int value);
void printTree(struct node* node);
void deleteTree(struct node* node);

#endif
