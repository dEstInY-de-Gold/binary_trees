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

	left = binary_tree_height(tree->left);
	right = binary_tree_height(tree->right);

	cnt = max(left, right) + 1;

	return (cnt);
}

/**
 * binary_tree_balance - Checks tree balance.
 * @tree: node pointer to root
 *
 * Return: Balance output.
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	int cnt;
	size_t l_cnt, r_cnt;

	if (!(tree))
		return (0);
	l_cnt = binary_tree_height(tree->left);
	r_cnt = binary_tree_height(tree->right);
	cnt = (int)l_cnt - (int)r_cnt;

	return (cnt);
}
