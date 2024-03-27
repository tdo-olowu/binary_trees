#include "binary_trees.h"

/**
 * binary_tree_preorder - traverses a binary tree in preord fashion
 * the value in the node must be passed as parameter to function.
 * @tree: the root of the tree to be traversed.
 * @func: ptr to function which takes int, returns nothing.
 * Return: nothing.
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL)
		return;
	if (func != NULL)
		func(tree->n);
	binary_tree_preorder(tree->left, func);
	binary_tree_preorder(tree->right, func);
}
