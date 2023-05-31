#include "binary_trees.h"

/**
 * binary_tree_node - A function for creating a binary tree.
 * @parent: A pointer to parent node.
 * @value: Data to store.
 *
 * Return: A pointer to root node.
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *ptr;

	ptr = (binary_tree_t *) malloc(sizeof(binary_tree_t));
	if (ptr == NULL)
	{
		return (NULL);
	}

	ptr->n = value;
	ptr->parent = parent;
	ptr->left = NULL;
	ptr->right = NULL;

	return (ptr);
}
