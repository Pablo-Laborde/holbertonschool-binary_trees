#include "binary_trees.h"

/**
 * binary_tree_balance- calculates the difference
 * @tree: tree
 * Return: the difference between left and right nodes
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
  return ((int)(binary_tree_height(tree->left) - binary_tree_height(tree->right)));
}
