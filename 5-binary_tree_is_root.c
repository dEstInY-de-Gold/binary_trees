#include "binary_trees.h"

/**
 * binary_tree_is_root - Checks if node is root.
 * @node: Pointer to the given node.
 */

int binary_tree_is_root(const binary_tree_t *node)
{
	if (!(node))
		return (0);
	if (!(node->parent))
		return (1);
	return (0);
}
