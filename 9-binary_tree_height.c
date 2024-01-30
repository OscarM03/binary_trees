#include "binary_trees.h"

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
	const binary_tree_t *temp;
	int height = 0;

	if (tree == NULL)
	{
		return (0);
	}
	temp = tree;
	while (temp->right != NULL)
	{
		height++;
		temp = temp->right;
	}
	return (height);
}
