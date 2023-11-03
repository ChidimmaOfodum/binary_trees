#include "binary_trees.h"
/**
 * binary_tree_depth - depth of a binary tree
 * @tree: node of tree
 * Return: depth of a given tree node
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	if (!tree->parent)
		return (0);

	return (binary_tree_depth(tree->parent) + 1);
}
