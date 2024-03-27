#include "binary_trees.h"


/**
 * binary_tree_size - counts the number of nodes in a tree
 * @tree: the subtree (or full tree)
 * Return: how many nodes in the subtree?
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	const binary_tree_t *l;
	const binary_tree_t *r;

	if (tree == NULL)
		return (0);
	l = tree->left;
	r = tree->right;

	return (1 + binary_tree_size(l) + binary_tree_size(r));
}
