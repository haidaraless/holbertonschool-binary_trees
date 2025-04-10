#include "binary_trees.h"

/**
 * binary_tree_inorder - Goes through a binary tree using in-order traversal
 * @tree: Pointer to the root node of the tree to traverse
 * @func: Pointer to a function to call for each node
 *
 * Return: Nothing
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{

/* Check if the tree or func is NULL, if so return */
if (tree == NULL || func == NULL)
return;

/* Traverse the left subtree */
binary_tree_inorder(tree->left, func);

/* Process the current node, pass its value to the func */
func(tree->n);

/* Traverse the right subtree */
binary_tree_inorder(tree->right, func);

}
