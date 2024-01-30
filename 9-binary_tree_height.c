#include "binary_trees.h"

/**
 * _height - Helper function
 *
 * @tree: Pointer
 * Return: Height
 */
size_t _height(const binary_tree_t *tree)
{
	size_t height_l, height_r;

	if (tree == NULL)
		return (0);

	height_l = _height(tree->left);
	height_r = _height(tree->right);

	if (height_l > height_r)
		return (height_l + 1);
	else
		return (height_r + 1);
}

/**
 * binary_tree_height - Measures the height of a binary tree
 *
 * @tree: Pointer to the root node of the tree to measure the height
 * Return: 0 if tree is NULL otherwise height
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	return (_height(tree) - 1);
}
