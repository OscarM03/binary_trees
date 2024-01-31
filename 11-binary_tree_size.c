#include "binary_trees.h"

/**
 * binary_tree_size - Calculates the size (number of nodes)
 * of a binary tree.
 *
 * @tree: A pointer to the root node of the binary tree.
 *
 * Return: The size of the binary tree, or 0 if the tree
 * is empty (NULL).
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	int left_size, right_size;

	if (tree == NULL)
	{
		return (0);
	}
	left_size = binary_tree_size(tree->left);
	right_size = binary_tree_size(tree->right);

	return (left_size + right_size + 1);
}
