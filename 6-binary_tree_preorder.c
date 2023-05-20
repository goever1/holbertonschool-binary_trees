#include "binary_trees.h"

/**
 * binary_tree_preorder - it goes through a binary tree in a pre-order traversal
 * @tree: pointer to the root of the tree
 * @func: function to call each node
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if(tree || func)
	{
		func(tree->n);
		binary_tree_preorder(tree->left, func);
		binary_tree_preorder(tree->rigth, func);
	}
}