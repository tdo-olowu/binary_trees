#include "binary_trees.h"


/**
 * binary_tree_is_root - checks if a node is a root.
 * a root has no parents, that's all.
 * @node: the node to interrogate.
 * Return: 1 if node exists and is a root, 0 else.
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);
	if (node->parent == NULL)
		return (1);
	return (0);
}
