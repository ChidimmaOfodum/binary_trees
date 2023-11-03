#include "binary_trees.h"

/**
 * get_sibling - gets the sibliling of a tree node
 * @node: input node
 * Return: pointer to the sibling node
 */

binary_tree_t *get_sibling(binary_tree_t *node)
{
	if (node == NULL)
		return (NULL);

	if (node->parent == NULL)
		return (NULL);

	if (node->parent->left != NULL && node->parent->left != node)
		return (node->parent->left);
	else if (node->parent->right != NULL && node->parent->right != node)
	{
		return (node->parent->right);
	}

	return (NULL);
}

/**
 * binary_tree_uncle - gets the uncle of a tree node
 * @node: input node
 * Return: pointer to the uncle node
 */

binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL)
		return (NULL);

	binary_tree_t *uncle = get_sibling(node->parent);

	if (uncle != NULL)
		return (uncle);

	return (NULL);
}

