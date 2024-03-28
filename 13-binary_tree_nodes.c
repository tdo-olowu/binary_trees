#include "binary_trees.h"

/**
 * binary_tree_nodes - counts the nodes with at least one child
 * @tree: the root of a subtree
 * Return: the number of nodes with at least one child.
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	const binary_tree_t *l;
	const binary_tree_t *r;

	if (tree == NULL)
		return (0);
	if ((tree->left == NULL) && (tree->right == NULL))
		return (0);
	l = tree->left;
	r = tree->right;

	return (1 + binary_tree_nodes(l) + binary_tree_nodes(r));
}
