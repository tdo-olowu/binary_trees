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
	size_t left_count;
	size_t right_count;

	if (tree == NULL)
		return (0);
	if ((tree->left == NULL) && (tree->right == NULL))
		return (1);
	left_count = binary_tree_leaves(tree->left);
	right_count = binary_tree_leaves(tree->right);

	return (left_count + right_count);
}
