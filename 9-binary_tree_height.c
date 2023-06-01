#include "binary_trees.h"

/**
 * max - Find maximum between two numbers.
 * @element1: first value.
 * @element2: second value.
 *
 * Return: The max element.
 */

size_t max(size_t element1, size_t element2)
{
	if (element1 > element2)
		return (element1);
	else
		return (element2);
}

/**
 * binary_tree_height - Calculates for the height of tree.
 * @tree: A pointer to the tree node
 *
 * Return: The height of tree.
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t cnt, left, right;

	if (!(tree))
		return (0);
	if ((!(tree->left)) & (!(tree->right)))
		return (0);
	left = binary_tree_height(tree->left);
	right = binary_tree_height(tree->right);

	cnt = max(left, right) + 1;

	return (cnt);
}
