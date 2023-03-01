#include <stdlib.h>

typedef struct binary_tree_s
{
    int n;
    struct binary_tree_s *parent;
    struct binary_tree_s *left;
    struct binary_tree_s *right;
}binary_tree_t;

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
    struct binary_tree_t* new_node;

    new_node = malloc(sizeof(struct binary_tree_t));
    if (new_node == NULL)
        return NULL;

    new_node->n = value;
    new_node->left = NULL;
    new_node->right = NULL;
    new_node->parent = parent;

    return new_node;
}
