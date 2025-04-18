#include "binary_trees.h"

/**
* binary_tree_leaves - counts the number of leaves in a binary tree
* @tree: a pointer to the root node of the tree to count the number of leaves
*
* Return: number of leaf nodes, or 0 if tree is NULL
*/
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (1);

	return (binary_tree_leaves(tree->left) + binary_tree_leaves(tree->right));
}
