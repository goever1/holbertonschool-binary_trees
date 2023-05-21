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
 * binary_tree_is_full - it cheks if the binary tree is full
 * @tree: pointer to the root fo the tree
 * Return: if the binary tree is full or 0 if error
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	if (!tree->right && !tree->left)
		return (1);
	if (tree->right && tree->left)
		return (binary_tree_is_full(tree->right) && binary_tree_is_full(tree->left));
	return (0);
}
/**
 * binary_tree_is_perfect - it cheks if the binary tree is perfect
 * @tree: pointer to the root of the tree
 * Return: if the binary tree is perfect or 0 if error
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	if (binary_tree_height(tree) == 0)
	{
		if (binary_tree_is_full(tree) == TRUE)
				return (1);
	}
	return (0);
}
