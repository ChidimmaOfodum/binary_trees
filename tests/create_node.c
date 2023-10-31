#include <assert.h>
#include <stdio.h>

#include "binary_trees.h"

void create_root_node()
{
    binary_tree_t *btree = binary_tree_node(NULL, 32);

    assert(btree != NULL);
    assert(btree->n == 32);
    assert(btree->left == NULL);
    assert(btree->right == NULL);
}

void child_nodes_points_to_parent()
{
    binary_tree_t *root = binary_tree_node(NULL, 2048);
    binary_tree_t *c1 = binary_tree_node(root, 512);
    binary_tree_t *c2 = binary_tree_node(root, 128);

    assert(c1->parent == root);
    assert(c2->parent == root);

}

int main(void)
{
    create_root_node();
    child_nodes_points_to_parent();
}
