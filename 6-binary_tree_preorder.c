#include "binary_trees.h"
/**
 * binary_tree_preorder - transverses a binary tree(preorder)
 * @tree: root node
 * @func : pointer to a function call for each node.
*/

void binary_tree_preorder(const binary_tree_t *tree, void(*func)(int))
{
    if (!tree || !func)
        return;

    func(tree->n);
    binary_tree_t *tmp = tree->left;
    binary_tree_preorder(tmp, func);
    tmp = tree->right;
    binary_tree_preorder(tmp, func);
}
