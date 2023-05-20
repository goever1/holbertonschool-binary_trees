#include "binary_trees.h"

/**
 * binary_tree_nodes - it counts the nods with at least 1 child node
 * @tree: pointer to the root of the tree
 * Retur: the amount of nods with child node or 0 if error
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t nodes = 0;

	if (!tree)
		return (0);
	if (tree->right || tree->left)
		nodes += 1;

	nodes += binary_tree_nodes(tree->rigth);
	nodes += binary_tree_nodes(tree->left);

	return (nodes);
}
