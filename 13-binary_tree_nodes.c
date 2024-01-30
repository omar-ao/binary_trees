#include "binary_trees.h"

/**
 * count - Counts the number of nodes
 * @tree: Pointer
 * Return: count
 */
size_t count(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	if (tree->left || tree->right)
		return (1 + count(tree->left) + count(tree->right));
	else
		return (count(tree->left) + count(tree->right));
}
/**
 * binary_tree_nodes - Counts the nodes with at least 1 child in a binary tree
 *
 * @tree: A pointer to the root node of the tree to cunt the number of nodes
 * Return: 0 if tree is NULL otherwise number of nodes
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	return (count(tree));
}
