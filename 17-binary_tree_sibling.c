#include "binary_trees.h"

/**
 * binary_tree_sibling - finds sibling of node
 *
 * @node: node to be checked
 *
 * Return: returns pointer to sibling node
 */

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (!node || !node->parent)
		return (NULL);

	if (node == node->parent->left)
		return (node->parent->right);

	return (node->parent->left);
}
