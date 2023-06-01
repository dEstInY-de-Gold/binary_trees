#include "binary_trees.h"

/**
 * binary_tree_postorder - postorder traversal.
 * @tree: A pointer to tree root node.
 * @func: A ponter to function for traversing.
 */

void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if ((!(tree)) || (!(func)))
		return;
	binary_tree_postorder(tree->left, func);
	binary_tree_postorder(tree->right, func);
	func(tree->n);
}
