#include "binary_trees.h"

/*
 * binary_tree_is_perfect - it cheks if the binary tree is perfect
 * @tree: pointer to the root of the tree
 * Return: if the binary tree is perfect or 0 if error
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (!tree)
		return(0);
	if (binary_tree_height(tree) == 0)
		return (binary_tree_is_full(tree));
	return(1);
}
