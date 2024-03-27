#include "binary_trees.h"

/*
 * Write a function that inserts a node as the left-child of another node

    Prototype: binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value);
    Where parent is a pointer to the node to insert the left-child in
    And value is the value to store in the new node
    Your function must return a pointer to the created node, or NULL on failure or if parent is NULL
    If parent already has a left-child, the new node must take its place, and the old left-child must be set as the left-child of the new node.
*/

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
	left_child->left = NULL;
	left_child->right = NULL;

	parent->left = left_child;

	return (left_child);
}
