#include "binary_trees.h"

/**
 * binary_tree_inorder - Inorder trasersal of trees.
 * @tree: A pointer to root tree node.
 * @func: A pointer to function for traversal.
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if ((!(tree)) || (!(func)))
		return;
	binary_tree_inorder(tree->left, func);
	func(tree->n);
	binary_tree_inorder(tree->right, func);
}
