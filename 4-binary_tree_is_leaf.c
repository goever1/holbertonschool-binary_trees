#include "binary_trees.h"

/**
 * binary_tree_is_leaf - cheks if the node is a leaf
 * @node: pointer to the node
 * Return: 1 if it is a leaf, 0 if not
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (!node || node->left || node->right)
		return (0);
	return (1);
}
