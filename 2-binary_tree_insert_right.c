#include "binary_trees.h"

/**
 * binary_tree_insert_right - Inserts node to right of tree.
 * @parent: Pointer to parent node.
 * @value: Data to store.
 *
 * Return: Pointer to inserted node.
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *ptr, *tmp;

	if (parent == NULL)
	{
		return (NULL);
	}

	ptr = binary_tree_node(parent, value);
	if (parent->right == NULL)
	{
		parent->right = ptr;
		ptr->parent = parent;
	}
	else
	{
		tmp = parent->right;
		parent->right = ptr;
		parent->right->left = tmp->left;
		parent->right->right = tmp;
		parent->right->right->parent = ptr;
		parent->right->parent = parent;
	}
	return (parent->right);
}
