#include "binary_trees.h"

/**
 * binary_tree_size - it founds the size of the binary tree
 * @tree: pointer to the root of the tree
 * Return: the size of the tree or 0 if error
 */

size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t lh = 0, rh = 0;

	if(!tree)
		return (0);

	lh = 1 + binary_tree_size(tree->left);
	rh = 1 + binary_tree_size(tree->right);
	
	return (lh + rh + 1);

}
