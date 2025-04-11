/**
* binary_tree_balance - measures the balance factor of a binary tree
* @tree: a pointer to the root node of the tree to measure the balance factor
*
* Return: balance factor, or 0 if tree is NULL
*/
int binary_tree_balance(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	return ((int)binary_tree_height(tree->left) - (int)binary_tree_height(tree->right));
}
