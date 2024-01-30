#include "binary_trees.h"

/**
 * is_full - Helper
 *
 * @tree: Pointer
 * Return: 1
 */
int is_full(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (1);

	if (tree->left && tree->right)
		return (is_full(tree->left) && is_full(tree->right));
	return (0);
}
/**
 * binary_tree_is_full - Checks if a binary tree is full
 *
 * @tree: Pointer to the root
 * Return: 0 if NULL otherwise 1
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	return (is_full(tree));
}
