#include "binary_trees.h"

/**
 * binary_tree_nodes - counts nodes with atleast 1 child
 *
 * @tree: tree to be sized
 *
 * Return: returns size of tree
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	int node_count = 0;

	if (tree == NULL)
	{
		return (0);
	}

	if (tree->left || tree->right)
	{
		node_count += 1;
	}

	node_count += binary_tree_nodes(tree->left);
	node_count += binary_tree_nodes(tree->right);

	return (node_count);
}
