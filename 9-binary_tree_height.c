#include "binary_trees.h"


/**
 * _max - returns the max of a pair of numbers
 * @a: the first number
 * @b: the second number
 * Return: the maximum of a, b
 */
size_t _max(size_t a, size_t b)
{
	if (a > b)
		return (a);
	return (b);
}


/**
 * binary_tree_height - computes the height of a binary tree
 * the height is the longest depth in the tree
 * the depth is the count of edges from the root to some node
 * ...
 * @tree: the root of the tree
 * Return: size_t, an unsigned int. the height of the tree
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	const binary_tree_t *l;
	const binary_tree_t *r;

	if (tree == NULL)
		return (0);
	l = tree->left;
	r = tree->right;

	return (1 + _max(binary_tree_height(l), binary_tree_height(r)));
}
