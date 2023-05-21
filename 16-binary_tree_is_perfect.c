#include "binary_trees.h"

/**
 * binary_tree_height - it measures the hight of a binary tree
 * @tree: pointer to the root of the tree
 * Return: the hight of the tree
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	int lh = 0, rh = 0;

	if (!tree)
		return (0);
	if (tree->left)
		lh = 1 + binary_tree_height(tree->left);
	if (tree->right)
		rh = 1 + binary_tree_height(tree->right);
	return ((lh > rh) ? lh : rh);

}

/**
 * binary_tree_is_perfect - it cheks if the binary tree is perfect
 * @tree: pointer to the root of the tree
 * Return: if the binary tree is perfect or 0 if error
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int lh, rh;

	if (!tree)
		return (0);
	lh = binary_tree_height(tree->left);
	rh = binary_tree_height(tree->right);

	if (lh == rh)
	{
		if (!tree->left && !tree->right)
				return (1);
		return (binary_tree_is_perfect(tree->left) && binary_tree_is_perfect(tree->right));
	}
	return (0);
}
