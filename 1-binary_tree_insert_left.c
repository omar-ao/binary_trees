#include "binary_trees.h"

/**
 * binary_tree_insert_left - Inserts a node as the left-child of another node
 *
 * @parent: Pointer to the node to insert the left-child in
 * @value: is the value to store in the new node
 * Return: Null on failure and if parent is NULL otherwisw pointer to
 * the created node
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
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

	if (parent->left == NULL)
		parent->left = node;
	else
	{
		grand_child = parent->left;
		parent->left = node;
		node->left = grand_child;
		grand_child->parent = node;
	}

	return (node);
}
