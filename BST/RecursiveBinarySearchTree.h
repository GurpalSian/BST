#pragma once

#include <iostream>
#include "Node.h"


class RecursiveBinarySearchTree
{

public:

	RecursiveBinarySearchTree() = delete;

	static void insert_integer_recursively(struct node** tree, int value);
	static void print_tree_recursively(struct node* node);
	static void terminate_tree_recursively(struct node* node);
	static void delete_node_recursively(struct node* node);

private:




};