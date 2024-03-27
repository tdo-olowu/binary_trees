#include "binary_trees.h"

/**
 * binary_tree_uncle - finds the uncle of a node
 * this is the sibling of the parent node.
 * ...
 * @node: have you seen my uncle?
 * Return: here's a pointer to your uncle!
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (node == NULL)
		return (NULL);
	if (node->parent == NULL)
		/* the root has no uncle */
		return (NULL);
	if (node->parent->parent == NULL)
		/* lvl 1 nodes have no uncle */
		return (NULL);
	if (node->parent->parent->left == node->parent)
		return (node->parent->parent->right);
	return (node->parent->parent->left);
}
