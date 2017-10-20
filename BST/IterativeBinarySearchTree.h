#pragma once

#include <iostream>
#include <stack>
#include "Node.h"

class IterativeBinarySearchTree
{

public:

	IterativeBinarySearchTree() = delete;

	static void insert_integer_iteratively(struct node** tree, int value);
	static void print_tree_iteratively(struct node* node);
	static void terminate_tree_iteratively(struct node* node);
	static void delete_node_iteratively(struct node* node);


private:

	

};