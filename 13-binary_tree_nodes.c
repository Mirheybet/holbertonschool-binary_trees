#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_nodes - main
 * @tree: clone of main tree
 * Return: allcount
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	int rightcount = 0, leftcount = 0, allcount;

	const binary_tree_t *c = tree;

	if (tree == NULL)
	{
		return (0);
	}

	rightcount += binary_tree_nodes(c->right);
	leftcount += binary_tree_nodes(c->left);

	if (c->left != NULL || c->right != NULL)
	{
		return (1 + leftcount + rightcount);
	}

	allcount = rightcount + leftcount;
	return (allcount);
}
