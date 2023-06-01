#include "binary_trees.h"

/**
 * binary_tree_leaves - Finds the number of leaf node in a tree.
 * @tree: A pointer to root of tree.
 *
 * Return: Number of leaf nodes found.
 */

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t cnt, l_cnt, r_cnt;

	if (!(tree))
		return (0);
	else if ((!(tree->left)) & (!(tree->right)))
	{
		return (1);
	}
	else
	{
		l_cnt = binary_tree_leaves(tree->left);
		r_cnt = binary_tree_leaves(tree->right);
		cnt = l_cnt + r_cnt;
	}
	return (cnt);
}
