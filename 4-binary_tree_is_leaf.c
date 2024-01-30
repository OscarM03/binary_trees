#include "binary_trees.h"

/**
 * binary_tree_is_leaf - Checks if a given node is a leaf in a binary tree.
 * @node: Pointer to the node to be checked.
 *
 * Return: 1 if the node is a leaf, 0 otherwise or if the node is NULL.
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL)
	{
		return (0);
	}
	if (node->left == NULL && node->right == NULL)
	{
		return (1);
	}
	return (0);
}
