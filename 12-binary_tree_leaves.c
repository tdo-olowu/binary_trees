#include "binary_trees.h"

/**
 * binary_tree_leaves - counts the leaves in a binary tree
 * a leaf is a node with both children as NULL
 * ...
 * @tree: the tree whose leaves are to be counted
 * Return: the number of leaves in the tree
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	const binary_tree_t *l;
	const binary_tree_t *r;

	if (tree == NULL)
		return (0);
	l = tree->left;
	r = tree->right;
	if (l != NULL || r != NULL)
		return (0);
	return (1 + binary_tree_leaves(l) + binary_tree_leaves(r));
}
