#include "binary_trees.h"

/**
 * binary_tree_uncle - it founds the uncle of a node
 * @node: pointer to the node to find the unlce
 * Return: a pointer to the uncle node or NULL if fail
 */

binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (!node)
		return (NULL);
	if (node->parent->parent->left == node->parent && node->parent->parent->right)
		return (node->parent->parent->right);
	if (node->parent->parent->right == node->parent && node->parent->parent->left)
		return (node->parent->parent->left);
	return (NULL);
}
