#include "binary_trees.h"

/**
 * binary_tree_is_perfect - checks if a bin tree is perfect
 * @tree: ptr to the root of the subtree
 * Return: 1 if the tree exists and is perfect, 0 otherwise
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
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
		return (binary_tree_is_perfect(l) && binary_tree_is_perfect(r));
	return (0);
}
