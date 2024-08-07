#include <stdio.h>
#include "binary_trees.h"

/**
 * binary_tree_height - gets the height of a binary tree
 * @tree: root node to draw height from for tree
 *
 * Return: size_t representing height, 0 on failure or NULL
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t ls = 0;
	size_t rs = 0;

	if (!tree)
		return (0);

	if (tree->left)
		ls += 1 + binary_tree_height(tree->left);
	if (tree->right)
		rs += 1 + binary_tree_height(tree->right);

	if (ls > rs)
		return (ls);
	else
		return (rs);
}
