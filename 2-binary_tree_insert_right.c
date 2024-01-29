#include "binary_trees.h"

/**
 * binary_tree_insert_right - Inserts a node as the right-child of another node
 *
 * @parent: Pointer to the node to insert the right-child in
 * @value: is the value to store in the new node
 * Return: Null on failure and if parent is NULL otherwisw pointer to
 * the created node
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *node;
	binary_tree_t *grand_child;

	if (parent == NULL)
		return (NULL);

	node = malloc(sizeof(binary_tree_t));
	if (node == NULL)
		return (NULL);

	node->n = value;
	node->parent = parent;
	node->right = NULL;
	node->left = NULL;

	if (parent->right == NULL)
		parent->right = node;
	else
	{
		grand_child = parent->right;
		parent->right = node;
		node->right = grand_child;
		grand_child->parent = node;
	}

	return (node);
}
