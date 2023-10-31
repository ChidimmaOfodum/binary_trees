#include <assert.h>
#include <stdio.h>

#include "binary_trees.h"

void delete_binary_tree()
{
    binary_tree_t *root = binary_tree_node(NULL, 4096);
    binary_tree_t *left = binary_tree_insert_left(root, 32);
    binary_tree_t *c1 = binary_tree_insert_right(root, 524288);
    binary_tree_t *c2 = binary_tree_insert_right(root, 8192);

    binary_tree_delete(root);

    assert(c2 == NULL);
    assert(c1 == NULL);
    assert(left == NULL);
    assert(root == NULL);
}

int main(void)
{
    delete_binary_tree();
}
