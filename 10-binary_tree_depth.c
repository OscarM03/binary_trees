#include "binary_trees.h"

/**
 * binary_tree_depth - Calculates the depth of a node
 * in a binary tree.
 *
 * @tree: A pointer to the node for which to calculate
 * the depth.
 *
 * Return: The depth of the given node in the binary tree.
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth = 0;

	if (tree == NULL)
	{
		return (0);
	}

	if (tree->parent != NULL)
	{
		depth = binary_tree_depth(tree->parent);
		depth++;
	}
	return (depth);
}
