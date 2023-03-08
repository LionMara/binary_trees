#include "binary_trees.h"

/**
 * binary_tree_height_bal - gets height of tree
 *
 * @tree: tree to be meausred
 *
 * Return: height
 */

size_t binary_tree_height_bal(const binary_tree_t *tree)
{
	int left_height = 0;
	int right_height = 0;
	int max_height = 0;

	if (tree == NULL)
	{
		return (0);
	}


	left_height = 1 + binary_tree_height_bal(tree->left);
	right_height = 1 + binary_tree_height_bal(tree->right);


	if (left_height >= right_height)
	{
		max_height = left_height;
	}
	else
	{
		max_height = right_height;
	}

	return (max_height);
}


/**
 * binary_tree_balance - checks if tree is balanced
 * @tree: tree to be checked
 *
 * Return: returns if balanced
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	int sizeDif = 0, left = 0, right = 0;

	if (tree == NULL)
	{
		return (0);
	}

	left = binary_tree_height_bal(tree->left);
	right = binary_tree_height_bal(tree->right);

	sizeDif = left - right;

	return (sizeDif);
}
