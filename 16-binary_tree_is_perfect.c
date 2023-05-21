#include "binary_trees.h"

/*
 * binary_tree_is_perfect - it cheks if the binary tree is perfect
 * @tree: pointer to the root of the tree
 * Return: if the binary tree is perfect or 0 if error
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int lf = 0, rh = 0;

	if (!tree)
		return (0);

	if (tree->right && tree->left)
	{
		lh = 1 + binary_tree_is_perfect(tree->left);
		rh = 1 + binary_tree_is_perfect(tree->right);
	}

	if (lh == rh)
		return(binaru_tree_is_percfect(tree));
}
