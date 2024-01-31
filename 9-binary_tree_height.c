#include "binary_trees.h"

/**
 * max - Finds the maximum of two integers.
 * @a: The first integer.
 * @b: The second integer.
 * Return: the larger int
 * The larger of the two integers:
 * @a if @a > @b, or @b otherwise.
 */
int max(int a, int b)
{
	return ((a > b) ? a : b);
}

/**
 * binary_tree_height - Measures the height of a binary tree.
 * @tree: Pointer to the root node of the tree to measure.
 *
 * If @tree is NULL, the height is considered 0. If @tree has
 * no right subtree,
 * the height is considered 0 as well.
 *
 * Return: The height of the binary tree.
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	int left_height = 0, right_height = 0, height;

	if (tree == NULL)
	{
		return (0);
	}

	if (tree->left != NULL)
	{
		left_height = 1 + binary_tree_height(tree->left);
	}

	if (tree->right != NULL)
	{
		right_height = 1 + binary_tree_height(tree->right);
	}

	height = max(right_height, left_height);
	return (height);
}
