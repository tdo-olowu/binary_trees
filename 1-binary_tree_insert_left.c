#include "binary_trees.h"

/**
 * binary_tree_insert_left - creates a left-child for a parent.
 * @parent: is a pointer to the parent which births the left-child
 * @value: the value the left-child holds
 * Return: a pointer to the created node, or NULL if failure.
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *left_child;

	if (parent == NULL)
		return (NULL);
	left_child = malloc(sizeof(binary_tree_t));
	if (left_child == NULL)
		return (NULL);

	left_child->n = value;
	if (parent->left == NULL)
		left_child->left = NULL;
	else
	{
		left_child->left = parent->left;
		parent->left->parent = left_child;
	}
	left_child->right = NULL;

	left_child->parent = parent;
	parent->left = left_child;

	return (left_child);
}
