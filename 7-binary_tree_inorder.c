#include "binary_trees.h"

/**
 * binary_tree_inorder - traverses a binary tree in inord fashion
 * this means traversing the left subtree before acting on current node.
 * @tree: the root of a subtree
 * @func: pointer to a function which takes an int and returns void
 * Return: nothing.
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL)
		return;
	binary_tree_inorder(tree->left, func);
	if (func != NULL)
		func(tree->n);
	binary_tree_inorder(tree->right, func);
}
