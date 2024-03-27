#include "binary_trees.h"

/**
 * binary_tree_is_leaf - checks if a node is a leaf
 * a leaf has no children, that's all.
 * @node: the node to interrogate.
 * Return: 1 if node exists and is leaf, 0 otherwise.
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);
	if ((node->right == NULL) && (node->left == NULL))
		return (1);
	return (0);
}
