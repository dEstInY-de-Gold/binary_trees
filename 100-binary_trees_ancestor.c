#include "binary_trees.h"

/**
 * binary_trees_ancestor - Find the lowest common ancestor of two nodes.
 * @first: A pointer to first node.
 * @second: A pointer to second node.
 *
 * Return: A pointer to the found ancestor.
 */
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
		const binary_tree_t *second)
{
	const binary_tree_t *left_ancestor, *right_ancestor;

	for (left_ancestor = first; left_ancestor;
			left_ancestor = left_ancestor->parent)
	{
		for (right_ancestor = second; right_ancestor;
				right_ancestor = right_ancestor->parent)
		{
			if (right_ancestor == left_ancestor)
				return ((binary_tree_t *) right_ancestor);
		}
	}
	return (NULL);
}
