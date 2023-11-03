#include "binary_trees.h"
/**
 * delete_node - deletes a node
 * @node: node to be deleted
 */

void delete_node(binary_tree_t *node)
{
	if (!node)
		return;

	free(node);
	node = NULL;
}

/**
 * binary_tree_delete - deletes a tree
 * @tree: tree to be deleted
 */
void binary_tree_delete(binary_tree_t *tree)
{
	if (!tree)
		return;

	binary_tree_delete(tree->left);
	binary_tree_delete(tree->right);
	delete_node(tree);
}
