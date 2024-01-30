#include "binary_trees.h"

/**
 * _height - Computes the height of tree
 *
 * @tree: Pointer
 * Return: Height
 */
int _height(binary_tree_t *tree)
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
 * binary_tree_balance - Measures the balance factor of a binary tree
 *
 * @tree: Pointer to the root node
 * Return: 0 if tree is NULL otherwise balance factor
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int lh, rh;

	if (tree == NULL)
		return (0);
	lh = _height(tree->left) - 1;
	rh = _height(tree->right) - 1;

	return (lh - rh);
}
