#include "binary_trees.h"

/**
 * binary_tree_size - Finds the size of a tree.
 * @tree: A pointer to root node.
 *
 * Return: The calculated size of tree.
 */

size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t cnt, left, right;

	if (!(tree))
		return (0);
	left = binary_tree_size(tree->left);
	right = binary_tree_size(tree->right);
	cnt = left + right + 1;

	return (cnt);
}
