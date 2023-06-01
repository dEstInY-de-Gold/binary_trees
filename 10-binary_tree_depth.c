#include "binary_trees.h"

/**
 * binary_tree_depth - Measures depth of a tree.
 * @tree: A pointer to trees root node.
 *
 * Return: depth in size_t.
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t cnt = 0;

	if (!(tree))
		return (0);
	while (tree)
	{
		if (tree->parent)
			cnt += 1;
		tree = tree->parent;
	}

	return (cnt);
}
