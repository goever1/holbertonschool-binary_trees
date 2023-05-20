#include "binary_trees.h"

/**
 * binary_tree_insert_left - function that inserts a node
 * @parent: parent node
 * @value: value to store in the new node
 * Return: the new node
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *node = malloc(sizeof(binary_tree_t));

	if (!parent)
		return (NULL);
	if (!node)
		return (NULL);
	node->value = value;

	if (parent->left)
		node->left = parent->left;

	parent->left = node;

	return (node);
}
