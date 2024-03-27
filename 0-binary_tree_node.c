#include "binary_trees.h"

/**
 * binary_tree_node - creates a node of binary tree
 * creates a binary tree node. node is childless.
 *
 * @parent: pointer to the tree's parent
 * @value: the number stored in the binary tree
 * Return: pointer to the new node, or NULL on failure
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;
	size_t bintr_size = sizeof(binary_tree_t);

	new_node = malloc(bintr_size);
	if (new_node == NULL)
		return (NULL);
	memset(new_node, 0, bintr_size);

	new_node->n = value;
	new_node->parent = parent;
	new_node->left = NULL;
	new_node->right = NULL;

	return (new_node);
}
