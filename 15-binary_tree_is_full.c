#include "binary_trees.h"


/**
 * binary_tree_is_full - checks if a bin tree is full
 * @tree: pointer to the subtree's root
 * Return: 1 if tree exists and is full, 0 otherwise.
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	const binary_tree_t *l;
	const binary_tree_t *r;

	if (tree == NULL)
		return (0);

	l = tree->left;
	r = tree->right;
	if ((l == NULL) && (r == NULL))
		return (1);
	if ((l != NULL) && (r != NULL))
		return (binary_tree_is_full(l) && binary_tree_is_full(r));
	return (0);
}
