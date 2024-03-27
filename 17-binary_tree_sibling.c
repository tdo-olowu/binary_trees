#include "binary_trees.h"

/**
 * binary_tree_sibling - finds the sibling of a node
 * @node: have you seen my sibling anywhere?
 * Return: pointer to the sibling
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node == NULL)
		return (NULL);
	if (node->parent == NULL)
	{
		/* root has no sibling */
		return (NULL);
	}

	if (node->parent->left == node)
		return (node->parent->right);
	return (node->parent->left);
}
