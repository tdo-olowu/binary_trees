#include "binary_trees.h"

/**
 * binary_tree_delete - deletes a binary tree, recursively
 * @tree: the tree to delete.
 * Return: none
 */
void binary_tree_delete(binary_tree_t *tree)
{
	if (tree == NULL)
		return;
	binary_tree_delete(tree->left);
	binary_tree_delete(tree->right);
	free(tree);
}
