#include "binary_trees.h"

/**
 * binary_tree_is_full - checks if a binary tree is full
 *
 * @tree: tree to be checked
 *
 * Return: 1 if complete 0 if not
 */

int binary_tree_is_full(const binary_tree_t *tree)
{
	int left = 0;
	int right = 0;

	if (tree == NULL)
	{
		return (0);
	}

	if (tree->left && tree->right)
	{
		left = binary_tree_is_full(tree->left);
		right = binary_tree_is_full(tree->right);

		if (left == 0 || right == 0)
		{
			return (0);
		}
		return (1);
	}

	if (!tree->left && (!tree->right))
	{
		return (1);
	}

	return (0);
}
