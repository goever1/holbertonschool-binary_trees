#include "binary_trees.h"

/**
 * binary_tree_is_root - it cheks if the node is the root
 * @node: pointer to the node for cheking
 * Return: 1 if it is the root, 0 if not
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	if (!node || node-parent)
		return (0);
	return (1);
}
