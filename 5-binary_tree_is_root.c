#include "binary_trees.h"
/**
 * binary_tree_is_root - if a node is a root node
 * @node: input node
 * Return: 1 if true else 0
 */

int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);

	if (!node->parent)
		return (1);

	return (0);
}
