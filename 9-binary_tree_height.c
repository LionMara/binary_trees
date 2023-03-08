#include "binary_trees.h"

/**
 * binary_tree_height - gets height of tree
 *
 * @tree: tree to be meausred
 *
 * Return: height
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	int left_height = 0;
	int right_height = 0;
	int max_height = 0;

	if (tree == NULL)
	{
		return (0);
	}


	if (tree->left)
	{
		left_height = 1 + binary_tree_height(tree->left);
	}
	if (tree->right)
	{
		right_height = 1 + binary_tree_height(tree->right);
	}

	if (left_height >= right_height)
	{
		max_height = left_height;
	}
	else
	{
		max_height= right_height;
	}

	return (max_height);
}
