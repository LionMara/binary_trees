#include "binary_trees.h"

/**
 * binary_tree_insert_left - inserts node on left
 *
 * @parent: parent node
 * @value: value
 *
 * Return: node created
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *false_parent;

	if (!parent)
	{
		return (NULL);
	}

	false_parent = binary_tree_node(parent, value);

	if (parent->left != NULL)
	{
		false_parent->left = parent->left;
		parent->left->parent = false_parent;
	}

	parent->left = false_parent;

	return (false_parent);
}
