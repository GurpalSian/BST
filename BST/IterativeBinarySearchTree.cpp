#include "IterativeBinarySearchTree.h"

void IterativeBinarySearchTree::insert_integer_iteratively(struct node** tree, int value)
{
	struct node* node = (*tree);

	while (node->value != NULL)
	{
		if (value > node->value)
		{
			if (node->right == NULL)
			{
				node->right = new struct node();
			}
			node = node->right;
		}

		if (value < node->value)
		{
			if (node->left == NULL)
			{
				node->left = new struct node();
			}
			node = node->left;
		}
	}

	node->value = value;
}

void IterativeBinarySearchTree::print_tree_iteratively(struct node* node)
{
	std::stack<struct node*> s;

	bool done = false;

	while (!done)
	{

		while (node != nullptr)
		{
			s.push(node);

			node = node->left;
		}

		if (node == nullptr && (!s.empty()))
		{
			node = s.top();
			s.pop();

			std::cout << node->value << " ";

			node = node->right;
		}

		if (node == nullptr && s.empty())
		{
			done = true;
		}
	}
}

void IterativeBinarySearchTree::terminate_tree_iteratively(struct node* node)
{
	std::stack<struct node*> s;

	bool done = false;

	while (!done)
	{
		
		while (node != nullptr)
		{
			if (node->right)
			{
				s.push(node->right);
			}
			s.push(node);
			node = node->left;
		}

		node = s.top();
		s.pop();


		if (node->right && !s.empty() && node->right == s.top())
		{
			s.pop();
			s.push(node);
			node = node->right;
		}
		else
		{
			delete node;
			node = nullptr;
		}

		

		if (s.empty())
		{
			done = true;
		}

	}
}

void IterativeBinarySearchTree::delete_node_iteratively(struct node* node)
{

}