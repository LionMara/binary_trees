#include "binary_trees.h"

/**
 * binary_tree_is_root - determines if node is root
 *
 * @node: nodeto be checked
 *
 * Return: 0 if not root or 1 if root
 */

int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL)
	{
		return (0);
	}

	if (node->parent == NULL)
	{
		return (1);
	}

	else
	{
		return (0);
	}
}
