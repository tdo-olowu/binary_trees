#include "binary_trees.h"

/**
 * binary_tree_insert_right - creates a right-child for a parent.
 * @parent: is a pointer to the parent which births the right-child
 * @value: the value the right-child holds
 * Return: a pointer to the created node, or NULL if failure.
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *right_child;

	if (parent == NULL)
		return (NULL);
	right_child = malloc(sizeof(binary_tree_t));
	if (right_child == NULL)
		return (NULL);

	right_child->n = value;
	if (parent->right == NULL)
		right_child->right = NULL;
	else
	{
		right_child->right = parent->right;
		parent->right->parent = right_child;
	}
	right_child->left = NULL;

	right_child->parent = parent;
	parent->right = right_child;

	return (right_child);
}
