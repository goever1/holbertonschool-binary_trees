#include "binary_trees.h"

/**
 * binary_tree_leaves - it finds out the amount of leaves in the tree
 * @tree: it is a pointer to the root of the binary tree
 * Return: the amount of leaves in the tree or 0 if error
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t leaves = 0;

	if (!tree)
		return (0);
	if (!tree->right && !tree->left)
		leaves += 1;

	leaves += binary_tree_leaves(tree->right);
	leaves += binary_tree_leaves(tree->left);

	return (leaves);
}
