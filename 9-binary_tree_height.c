#include "binary_trees.h"
#include <stdlib.h>

size_t binary_tree_height(const binary_tree_t *tree)
{
    size_t count = 0;

    if (!tree)
        return 0;

    size_t left = binary_tree_height(tree->left);
    size_t right = binary_tree_height(tree->right);

    if (!tree->left && !tree->right)
        return 0;

    return (left > right ? left + 1 : right + 1);
}
