#include "binary_trees.h"

/**
 * binary_tree_insert_right - inserts node to right
 *
 * @parent: parent of node
 * @value: value to be stored
 *
 * Return: Returns new tree
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	if (!parent)
	{
		return (NULL);
	}

	new_node = binary_tree_node(parent, value);

	if (parent->right != NULL)
	{
		new_node->right = parent->right;
		parent->right->parent = new_node;
	}

	parent->right = new_node;

	return (parent);
}
