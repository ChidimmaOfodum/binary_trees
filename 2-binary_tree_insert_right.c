#include <stdlib.h>

#include "binary_trees.h"

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
    binary_tree_t *node;

    if (parent == NULL)
    {
        return (NULL);
    }

    node = binary_tree_node(parent, value);

    if (node == NULL)
        return (NULL);

    if (parent->right != NULL)
    {
        binary_tree_t *_rht = parent->right;
        parent->right = node;
        node->right = _rht;
        _rht->parent = node;
    }
    else
    {
        parent->right = node;
        node->parent = parent;
    }

    return (node);
}
