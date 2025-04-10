#include "binary_trees.h"

/**
 * binary_tree_is_leaf - Checks if a node is a leaf
 * @node: Pointer to the node to check
 *
 * Return: 1 if the node is a leaf, 0 otherwise
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
/* Check if the node is NULL */
if (node == NULL)
return (0);

/* A leaf has no left or right children */
if (node->left == NULL && node->right == NULL)
return (1);

/* The node has at least one child */
return (0);
}
