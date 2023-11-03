#include "binary_trees.h"
/**
 * binary_tree_height - returns height of a tree
 * @tree: node of a tree
 * Return: Height of the tree from the given node
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	size_t left = binary_tree_height(tree->left);
	size_t right = binary_tree_height(tree->right);

	if (!tree->left && !tree->right)
		return (0);

	return (left > right ? left + 1 : right + 1);
}
