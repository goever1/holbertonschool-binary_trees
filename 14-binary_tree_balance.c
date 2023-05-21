#include "binary_trees.h"

/**
 * binary_tree_balance - it measures the balance factor of a binary tree
 * @tree: pointer to the root of the tree
 * Return: the balance factor or 0 if error
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	int lh = 0, rh = 0;

	if (!tree)
		return (0);

	if (tree->left)
		lh += binary_tree_balance(tree->left);
	if (tree->right)
		rh += binary_tree_balance(tree->right);

	return (rh - lh);
}
