#include "binary_trees.h"

/**
 * binary_tree_balance - Measures the balance factor of a binary tree.
 *
 * @tree: A pointer to the root node of the binary tree.
 *
 * Return: The balance factor of the binary tree, or 0 if the tree is empty.
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	if (tree == NULL)
	{
		return (0);
	}

	return (binary_tree_height(tree->left) - binary_tree_height(tree->right));
}

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

	if (tree)
	{

		if (tree->left != NULL)
		{
			left_height = binary_tree_height(tree->left);
		}

		if (tree->right != NULL)
		{
			right_height = binary_tree_height(tree->right);
		}

		height = max(left_height, right_height);
		return (1 + height);
	}
	return (0);
}
