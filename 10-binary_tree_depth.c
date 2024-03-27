#include "binary_trees.h"

/**
 * binary_tree_depth - measures depth of binary tree
 * which is count of edges from root to some node
 * @tree: the node whose depth we want to measure
 * Return: the depth of the node from the root.
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth = 0;
	const binary_tree_t *temp;

	if (tree == NULL)
		return (0);
	temp = tree;
	while (temp->parent != NULL)
	{
		depth += 1;
		temp = temp->parent;
	}
	return (depth);
}
