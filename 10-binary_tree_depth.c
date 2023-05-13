#include "binary_trees.h"

/**
 * binary_tree_depth- calculates depth of a tree
 * @tree: tree
 * Return: trees depth
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	if (!tree->parent)
		return (-1);
	return (1 + binary_tree_depth(tree->parent));
}
