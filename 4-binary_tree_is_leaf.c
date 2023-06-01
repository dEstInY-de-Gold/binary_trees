#include "binary_trees.h"

/**
 * binary_tree_is_leaf - Checks if node is a leaf node.
 * @node: Pointer to the given node.
 */

int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (!(node))
		return (0);
	if ((!(node->left)) & (!(node->right)))
		return (1);
	return (0);
}
