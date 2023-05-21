#include "binary_trees.h"

/**
 * binary_tree_insert_right - function that inserts a node
 * @parent: parent node
 * @value: value to store in the new node
 * Return: the new node
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *node = binary_tree_node(parent, value);

	if (!parent)
		return (NULL);
	if (!node)
		return (NULL);
	if (parent->right)
	{
		node->right = parent->right;
		parent->right->parent = node;
	}
	parent->right = node;
	return (node);

}
