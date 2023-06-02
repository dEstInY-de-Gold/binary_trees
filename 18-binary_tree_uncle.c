#include "binary_trees.h"

/**
 * binary_tree_sibling - Finds the siblings to a tree.
 * @node: pointer to given node.
 *
 * Return: A pointer to the found sibling.
 */

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if ((!(node)) || (!(node->parent)))
		return (NULL);
	if (node->parent->left && node->parent->left != node)
		return (node->parent->left);
	if (node->parent->right && node->parent->right != node)
		return (node->parent->right);

	return (NULL);
}

/**
 * binary_tree_uncle - finds uncle to a node.
 * @node: given node.
 *
 * Return: A pointer to the found uncle of node.
 */

binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	binary_tree_t *uncle;

	if ((!(node)) || (!(node->parent)))
		return (NULL);
	uncle = binary_tree_sibling(node->parent);
	return (uncle);
}
