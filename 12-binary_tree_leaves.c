#include "binary_trees.h"

/**
 * binary_tree_leaves - Finds the number of leaf node in a tree.
 * @tree: A pointer to root of tree.
 *
 * Return: Number of leaf nodes found.
 */

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t cnt = 0;

	if (!(tree))
		return (0);
	if ((!(tree->left)) & (!(tree->right)))
	{
		cnt += 1;
		return (1);
	}
	binary_tree_leaves(tree->left);
	binary_tree_leaves(tree->right);

	return (cnt);
}
