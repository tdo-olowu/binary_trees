#include "binary_trees.h"

/*
 * Write a function that deletes an entire binary tree

    Prototype: void binary_tree_delete(binary_tree_t *tree);
    Where tree is a pointer to the root node of the tree to delete
    If tree is NULL, do nothing

 */

/*
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
