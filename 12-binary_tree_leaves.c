#include "binary_trees.h"

/**
 *binary_tree_leaves -  counts number of leaves
 *
 * @tree: tree to be sized
 *
 * Return: return number of leaves
 */

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	int size = 0;

	if (tree == NULL)
	{
		return (0);
	}

	if (!tree->left && !tree->right)
	{
		return (1);
	}

	size = binary_tree_leaves(tree->left) + binary_tree_leaves(tree->right);

	return (size);
}
