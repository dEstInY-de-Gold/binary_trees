#include "binary_trees.h"

/**
 * binary_tree_nodes - Counts parents nodes of a tree.
 * @tree: A pointer to root node.
 *
 * Return: Number of parent nodes.
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t cnt = 0, l_cnt, r_cnt;

	if ((!(tree)) || ((!(tree->left)) && (!(tree->right))))
		return (0);

	l_cnt = binary_tree_nodes(tree->left);
	r_cnt = binary_tree_nodes(tree->right);
	cnt += 1 + l_cnt + r_cnt;

	return (cnt);
}
