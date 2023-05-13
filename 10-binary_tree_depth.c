#include "binary_trees.h"

/**
 * binary_tree_depth- calculates height of a tree
 * @tree: tree 
 * Return: trees height
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t sl, sr;

	if (!tree)
		return (0);
	return (1 + binary_tree_height(tree->parent));
}
