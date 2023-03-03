#include "binary_trees.h"

/**
 * binary_tree_height - gets the height of a binary tree
 *
 * @tree: pointer to the root node of the tree to measure the height
 *
 * Return: the height of the tree
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t l;
	size_t r;

	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (0);

	l = binary_tree_height(tree->left);
	r = binary_tree_height(tree->right);

	if (l > r)
		return (l + 1);
	return (r + 1);
}

/**
 * binary_tree_balance - measures the balance factor of a binary tree
 *
 * @tree: pointer to the root node of the tree to measure the balance factor
 *
 * Return: balance factor, 0 if tree is NULL
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	if (tree)
	{
		int l_height = 0, r_height = 0;

		if (tree->right)
			r_height = 1 + binary_tree_height(tree->right);
		if (tree->left)
			l_height = 1 + binary_tree_height(tree->left);

		return (l_height - r_height);
	}

	return (0);
}
