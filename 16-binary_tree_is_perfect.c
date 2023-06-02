#include "binary_trees.h"

/**
 * binary_tree_is_full - Checks if tree is complete.
 * @tree: A pointer to root node.
 *
 * Return: 1 if full or 0 otherwise'
 */

int binary_tree_is_full(const binary_tree_t *tree)
{
	int left, right;

	if (!(tree))
		return (0);
	if ((!(tree->left)) && (!(tree->right)))
		return (1);
	left = binary_tree_is_full(tree->left);
	right = binary_tree_is_full(tree->right);

	return (left & right);
}

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

/**
 * binary_tree_is_perfect - Checks if tree is perfect.
 * @tree: A pointer to root of tree.
 *
 * Return: 1 if perfect tree or 0 otherwise.
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int left = 0, right = 0;

	if (tree == NULL)
		return (0);
	left = binary_tree_is_perfect(tree->left);
	right = binary_tree_is_perfect(tree->right);
	if (left != right)
		return (0);
	if (!binary_tree_balance(tree) && binary_tree_is_full(tree))
		return (1);
	return (0);
}
