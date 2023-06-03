#include "binary_trees.h"
/**
 * binary_tree_rotate_right - Perfirms right rotation on a binary tree.
 * @tree: Pointer to tree root.
 *
 * Return: pointer to the root of newly rotated tree.
 */

binary_tree_t *binary_tree_rotate_right(binary_tree_t *tree)
{
	binary_tree_t *child, *parent = tree;

	if (!(tree))
		return (NULL);
	child = parent->left;
	if (!(child))
		return (tree);

	if (child->right)
		child->right->parent = parent;
	parent->left = child->right;
	child->right = parent;
	child->parent = parent->parent;
	parent->parent = child;

	if (child->parent && child->parent->right == parent)
		child->parent->right = child;
	else if (child->parent)
		child->parent->left = child;

	return (child);
}
