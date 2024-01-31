#include "binary_trees.h"

/**
 * binary_tree_leaves - Counts the number of leaf nodes
 * in a binary tree.
 *
 * @tree: A pointer to the root node of the binary tree.
 *
 * Return: The number of leaf nodes in the binary tree,
 * or 0 if the tree is empty.
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	int left, right;

	if (tree == NULL)
	{
		return (0);
	}

	if (tree->left == NULL && tree->right == NULL)
	{
		return (1);
	}

	left = binary_tree_leaves(tree->left);
	right = binary_tree_leaves(tree->right);

	return (left + right);
}
