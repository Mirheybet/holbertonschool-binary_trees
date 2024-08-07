#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_leaves - main
 * @tree: clone of btree
 * Return: count of leaves
 */

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	int countright = 0, countleft = 0, countleaves = 0;

	if (tree == NULL)
	{
		return (0);
	}

	if (tree->right == NULL && tree->left == NULL)
	{
		return (1);
	}

	countleft += binary_tree_leaves(tree->left);
	countright += binary_tree_leaves(tree->right);
	countleaves = countleft + countright;
	return (countleaves);
}
