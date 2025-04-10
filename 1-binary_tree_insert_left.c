#include <stdlib.h>
#include "binary_trees.h"


/**
 * binary_tree_insert_left - Inserts a node as the left-child of another node
 * @parent: Pointer to the parent node
 * @value: The value to store in the new node
 *
 * Return: Pointer to the created node, or NULL on failure or if parent is NULL
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
binary_tree_t *new_node;

if (parent == NULL)
return (NULL);

/* Create the new node */
new_node = malloc(sizeof(binary_tree_t));
if (new_node == NULL)
return (NULL);

/* Initialize the new node */
new_node->n = value;
new_node->parent = parent;
new_node->left = NULL;
new_node->right = NULL;

/* If parent already has a left child, adjust the links */
if (parent->left)
{
new_node->left = parent->left;
parent->left->parent = new_node;
}

/* Set the new node as the left child of the parent */
parent->left = new_node;

return (new_node);
}
