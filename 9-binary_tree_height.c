#include "binary_trees.h"
/**
 * binary_tree_height - returns height of a tree
 * @tree: node of a tree
 * Return: Height of the tree from the given node
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left = 0;
	size_t right = 0;

	if (!tree)
		return (0);

	left = binary_tree_height(tree->left);
	right = binary_tree_height(tree->right);

	if (!tree->left && !tree->right)
		return (0);

	return (left > right ? left + 1 : right + 1);
}
