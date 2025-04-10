#include "binary_trees.h"

/**
 * binary_tree_postorder - Goes through a binary tre using post-order traversal
 * @tree: Pointer to the root node of the tree to traverse
 * @func: Pointer to a function to call for each node
 *
 * Return: Nothing
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{

/* Check if the tree or func is NULL, if so return */
if (!tree || !func)
return;

/* Traverse the left subtree first */
binary_tree_postorder(tree->left, func);

/* Traverse the right subtree after left */
binary_tree_postorder(tree->right, func);

/* Process the current node (call func with the node's value) */
func(tree->n);

}
