#include "binary_trees.h"


/**
 * binary_tree_postorder - traverses a binary tree in postord fashion
 * this means traversing the left subtree, then the right subtree
 * before acting on the current node (e.g. printing its value)
 * ...
 * @tree: the root of a subtree
 * @func: pointer to a function which takes an int and returns nothing.
 * Return: nothing
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL)
		return;
	binary_tree_postorder(tree->left, func);
	binary_tree_postorder(tree->right, func);
	if (func != NULL)
		func(tree->n);
}
