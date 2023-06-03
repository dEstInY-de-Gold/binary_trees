#include "binary_trees.h"

/**
 * binary_tree_levelorder - Traverses a tree by level order.
 * @tree: A pointer to root node.
 * @func: A pointer to function for traversal.
 */

void binary_tree_levelorder(const binary_tree_t *tree, void (*func)(int))
{
	const binary_tree_t **queue, *crnt;
	int front, rear;

	if (tree == NULL)
		return;
	queue = (const binary_tree_t **)malloc(sizeof(binary_tree_t *));
	if (queue == NULL)
		return;
	front = rear = 0;
	queue[rear] = tree;
	rear++;
	while (front < rear)
	{
		crnt = queue[front];
		front++;
		func(crnt->n);
		if (crnt->left)
		{
			queue = (const binary_tree_t **)realloc(queue,
					(rear + 1) * sizeof(binary_tree_t *));
			queue[rear] = crnt->left;
			rear++;
		}
		if (crnt->right)
		{
			queue = (const binary_tree_t **)realloc(queue,
					(rear + 1) * sizeof(binary_tree_t *));
			queue[rear] = crnt->right;
			rear++;
		}
	}
	free(queue);
}
