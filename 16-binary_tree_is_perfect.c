#include "binary_trees.h"

/**
 * _pow - Computes power
 *
 * @x: int
 * @y: y
 * Return: Power
 */
int _pow(int x, unsigned int y)
{
	int tmp;

	if (y == 0)
		return (1);
	tmp = _pow(x, y / 2);
	if ((y % 2) == 0)
		return (tmp * tmp);
	else
		return (x * tmp * tmp);
}

/**
 * count - Counts the number of nodes
 * @tree: Pointer
 * Return: count
 */
int count(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	return (1 + count(tree->left) + count(tree->right));
}

/**
 * _height - Helper function
 *
 * @tree: Pointer
 * Return: Height
 */
int _height(const binary_tree_t *tree)
{
	int height_l, height_r;

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
 * binary_tree_is_perfect - Checks if a binary tree is perfect
 *
 * @tree: Pointer to the root node
 * Return: 0 if tree is NULL otherwise 1
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int h, n;

	if (tree == NULL)
		return (0);
	h = _height(tree) - 1;
	n = count(tree);

	if (n == (_pow(2, h + 1) - 1))
		return (1);

	return (0);
}
