#include <iostream>

//#include <string>
//#include <sstream>

#include "Node.h"
#include "RecursiveBinarySearchTree.h"
#include "IterativeBinarySearchTree.h"


int main()
{
	struct node* root = new struct node();

	struct node** tree = &root;

	int z;
	

	RecursiveBinarySearchTree::insert_integer_recursively(tree, 10);
	RecursiveBinarySearchTree::insert_integer_recursively(tree, 20);
	RecursiveBinarySearchTree::insert_integer_recursively(tree, 5);
	RecursiveBinarySearchTree::insert_integer_recursively(tree, 6);
	RecursiveBinarySearchTree::insert_integer_recursively(tree, 1);
	RecursiveBinarySearchTree::insert_integer_recursively(tree, 8);
	RecursiveBinarySearchTree::insert_integer_recursively(tree, 30);
	RecursiveBinarySearchTree::insert_integer_recursively(tree, 14);
	RecursiveBinarySearchTree::insert_integer_recursively(tree, 3);
	RecursiveBinarySearchTree::insert_integer_recursively(tree, 2);

	RecursiveBinarySearchTree::print_tree_recursively(*tree);

	std::cout << std::endl;
	
	std::cin >> z;

	RecursiveBinarySearchTree::terminate_tree_recursively(*tree);
	
	
	std::cin >> z;
	

	
	struct node* root2 = new struct node();
	struct node** t = &root2;

	
	IterativeBinarySearchTree::insert_integer_iteratively(t, 10);
	IterativeBinarySearchTree::insert_integer_iteratively(t, 20);
	IterativeBinarySearchTree::insert_integer_iteratively(t, 5);
	IterativeBinarySearchTree::insert_integer_iteratively(t, 6);
	IterativeBinarySearchTree::insert_integer_iteratively(t, 1);
	IterativeBinarySearchTree::insert_integer_iteratively(t, 8);
	IterativeBinarySearchTree::insert_integer_iteratively(t, 30);
	IterativeBinarySearchTree::insert_integer_iteratively(t, 14);
	IterativeBinarySearchTree::insert_integer_iteratively(t, 3);
	IterativeBinarySearchTree::insert_integer_iteratively(t, 2);

	IterativeBinarySearchTree::print_tree_iteratively(*t);

	std::cout << std::endl;
	std::cin >> z;
	

	std::cout << (*t)->value << std::endl;

	std::cin >> z;

	IterativeBinarySearchTree::terminate_tree_iteratively(*t);





	










	std::cin >> z;
	return 0;
}