#include "RecursiveBinarySearchTree.h"

void RecursiveBinarySearchTree::insert_integer_recursively(struct node** tree, int value)
{
	struct node* node = (*tree);

	if (node->value == NULL)
	{
		node->value = value;
	}

	if (value > node->value)
	{
		if (node->right == NULL)
		{
			node->right = new struct node();
			node->right->value = value;
		}
		else
		{
			insert_integer_recursively(&(node->right), value);
		}
	}

	if (value < node->value)
	{
		if (node->left == NULL)
		{
			node->left = new struct node();
			node->left->value = value;
		}
		else
		{
			insert_integer_recursively(&(node->left), value);
		}
	}
}

void RecursiveBinarySearchTree::print_tree_recursively(struct node* node)
{
	if (node->left != nullptr)
	{
		print_tree_recursively(node->left);
	}

	std::cout << node->value << " ";

	if (node->right != nullptr)
	{
		print_tree_recursively(node->right);
	}
}

void RecursiveBinarySearchTree::terminate_tree_recursively(struct node* node)
{
	if (node->left != nullptr)
	{
		terminate_tree_recursively(node->left);
	}

	if (node->right != nullptr)
	{
		terminate_tree_recursively(node->right);
	}

	delete node;
	node = nullptr;
}

void RecursiveBinarySearchTree::delete_node_recursively(struct node* node)
{

}