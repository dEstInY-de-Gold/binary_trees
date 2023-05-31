#include "binary_trees.h"

/**
 * binary_tree_insert_left - Insertion at left node.
 * @parent: parent node.
 * @value: Data for storing.
 *
 * Return: Pointer to created node.
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *ptr, *tmp;

	ptr = binary_tree_node(parent, value);

	if (parent->left != NULL)
	{
		/* ptr = binary_tree_node(parent, value); */
		tmp = parent->left;
		/* parent->left->n = value; */
		parent->left = ptr;
		ptr->left = tmp;
		tmp->parent = parent;
	}
	else
	{
		/* ptr = binary_tree_node(parent, value); */
		parent->left = ptr;
		ptr->parent = parent;
	}
	return (ptr->left);
}
