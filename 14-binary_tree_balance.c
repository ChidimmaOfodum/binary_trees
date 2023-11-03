#include <stdlib.h>


#include "binary_trees.h"

/**
 * binary_tree_height - Measure the height of a binary tree.
 * @tree: A pointer to the root node of the binary tree.
 *
 * Return: The height of the binary tree.
 */
size_t tree_height(const binary_tree_t *tree)
{
    size_t left = 0, right = 0;
    
    if (!tree)
        return 0;

    left = binary_tree_height(tree->left);
    right = binary_tree_height(tree->right);

    if (!tree->left && !tree->right)
        return 0;

    return (left > right ? left + 1 : right + 1);
}

/**
 * binary_tree_balance - Measure the balance factor of a binary tree.
 * @tree: A pointer to the root node of the binary tree.
 *
 * Return: The balance factor (difference between left and right subtree heights).
 */
int binary_tree_balance(const binary_tree_t *tree)
{
    if (tree == NULL)
        return (0);

    return (tree_height(tree->left) - binary_tree_height(tree->right));
}

