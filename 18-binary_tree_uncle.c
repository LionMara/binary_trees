#include "binary_trees.h"

/**
 * binary_tree_uncle - finds uncleof node
 *
 * @node: node to be checked
 *
 * Return: returns popinter to node
 */

binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (!node || !node->parent || !node->parent->parent)
		return (NULL);

	if (node->parent == node->parent->parent->left)
		return (node->parent->parent->right);

	return (node->parent->parent->left);
}
