#include "binary_trees.h"

/**
 * binary_tree_node - creates a binary node
 *
 * @parent: parent of node
 * @value: value to be passed
 *
 * Return: new_node created
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node = malloc(sizeof(binary_tree_t));

	new_node->n = value;
	new_node->parent = parent;
	new_node->left = NULL;
	new_node->right = NULL;
	return (new_node);
}