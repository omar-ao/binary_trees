#include "binary_trees.h"

/**
 * binary_trees_ancestor - finds the lowest common ancestor of two nodes
 *
 * @first: First node
 * @second: Second node
 * Return: NULL if no common ancestor was found
 */
binary_tree_t *binary_trees_ancestor(
		const binary_tree_t *first, const binary_tree_t *second)
{
	binary_tree_t *tmp;

	if (first == NULL || second == NULL)
		return (NULL);

	while (first)
	{
		tmp = (binary_tree_t *) second;
		while (tmp)
		{
			if (tmp == first)
				return ((binary_tree_t *) first);
			tmp = tmp->parent;
		}
		first = first->parent;
	}
	return (NULL);
}
