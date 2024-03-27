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
	size_t ldepth;
	size_t rdepth;

	if (tree == NULL)
		return (0);
	ldepth = binary_tree_height(tree->left);
	rdepth = binary_tree_height(tree->right);
	if (ldepth >= rdepth)
		return (ldepth + 1);
	return (rdepth + 1);
}
