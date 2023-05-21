#include "binary_trees.h"

/**
 * binary_tree_is_full - it cheks if the binary tree is full
 * @tree: pointer to the root fo the tree
 * Return: if the binary tree is full or 0 if error
 */

int binary_tree_is_full(const binary_tree_t *tree)
{
	int full = 0;

	if (!tree)
		return (0);

	if (!tree->right && !tree->left)
		return (1);
	if (tree->rigth && tree->left)
		return (binary_tree_leaves(tree->right) && binary_tree_leaves(tree->left));

	return (0);
}
