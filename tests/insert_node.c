#include <assert.h>
#include <stdio.h>

#include "binary_trees.h"

void insert_left_child()
{
    binary_tree_t *root = binary_tree_node(NULL, 4096);
    binary_tree_t *left = binary_tree_insert_left(root, 32);

    assert(left != NULL);
    assert(left->parent = root);
    assert(root->left = left);
}

void insert_child_to_null_root()
{
    binary_tree_t *left = binary_tree_insert_left(NULL, 32);
    binary_tree_t *right = binary_tree_insert_right(NULL, 32);

    assert(left == NULL);
    assert(right == NULL);
}

void insert_left_to_left()
{
    binary_tree_t *root = binary_tree_node(NULL, 1);
    binary_tree_t *c1 = binary_tree_insert_left(root, 2);
    binary_tree_t *c2 = binary_tree_insert_left(root, 8);

    assert(root->left == c2);
    assert(c2->left = c1);
    assert(c1->left == NULL);
    assert(c1->parent == c2);
}

void insert_right_to_right()
{
    binary_tree_t *root = binary_tree_node(NULL, 131072);
    binary_tree_t *c1 = binary_tree_insert_right(root, 524288);
    binary_tree_t *c2 = binary_tree_insert_right(root, 8192);

    assert(root->right == c2);
    assert(c2->right == c1);
    assert(c1->parent == c2);

}

int main(void)
{
    insert_left_child();
    insert_child_to_null_root();
    insert_left_to_left();
    insert_right_to_right();
}
