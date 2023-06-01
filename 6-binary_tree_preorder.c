#include "binary_trees.h"

/**
 * binary_tree_preorder - Traversing a tree using preorder.
 * @node: A pointer to root node.
 * @(*func)(int): Function for traversing
 */
void traverse(binary_tree_t *node);

void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if ((!(tree)) || (!(func)))
		return; /* EXIT_SUCCESS; */
	func(tree->n);
	binary_tree_preorder(tree->left, func);
	binary_tree_preorder(tree->right, func);
}

/**
 * traverse - For traversig a tree.
 * @node: A pointer to node.
 */

void traverse(binary_tree_t *node)
{
	if (!(node))
		return;
	traverse(node->left);
}
