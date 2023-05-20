#include "binary_trees.h"

/**
 * binary_tree_depth - it calculates the depth of a binary tree
 * @tree: It is a pointer to a node to measure the depth
 * Return: the depth or 0 if thee node is NULL
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	int depth = 0;

	if (!tree)
		return (0);
	if (tree->parent)
	{
		depth = 1 + binary_tree_depth(tree->parent);
	}
	return (depth);
}
