#include "binary_trees.h"
/**
 * binary_tree_insert_left - inserts node as left-child
 * @parent: pointer to node to insert the left child in
 * @value: value of the node
 * Return: pointer to the created node
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *node;

	if (parent == NULL)
	{
		return (NULL);
	}

	node = binary_tree_node(parent, value);

	if (node == NULL)
		return (NULL);

	if (parent->left != NULL)
	{
		binary_tree_t *_lft = parent->left;

		parent->left = node;
		node->left = _lft;
		_lft->parent = node;
	}
	else
	{
		parent->left = node;
		node->parent = parent;
	}

	return (node);
}
