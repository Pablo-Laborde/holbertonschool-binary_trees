#include "binary_trees.h"

/**
 * binary_tree_is_root- checks if node is root
 * @node: node to chck
 * Return: 1 if it's root, 0 otherwise
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	if (node && !node->parent)
		return (1);
	return (0);
}
