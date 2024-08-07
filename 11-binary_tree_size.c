#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

/**
 * binary_tree_size - main
 * @tree: clone of main tree
 * Return: size of btree
 */

size_t binary_tree_size(const binary_tree_t *tree)
{
	const binary_tree_t *clonetree = tree;

	int sizebinarytree = 0, sizeright = 0, sizeleft = 0;

	if (tree == NULL)
	{
		return (0);
	}

	sizeright += binary_tree_size(clonetree->right);
	sizeleft += binary_tree_size(clonetree->left);
	sizebinarytree = 1 + sizeright + sizeleft;

	return (sizebinarytree);
}
