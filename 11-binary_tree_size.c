#include "binary_trees.h"

/**
 * binary_tree_size -  determines size of node
 *
 * @tree: tree to be sized
 *
 * Return: returns size of tree
 */

size_t binary_tree_size(const binary_tree_t *tree)
{
	int size;

	if (tree == NULL)
	{
		return (0);
	}
	size = binary_tree_size(tree->left) + 1 + binary_tree_size(tree->right);

	return (size);
}
