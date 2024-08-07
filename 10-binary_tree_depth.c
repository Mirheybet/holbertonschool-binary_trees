#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"
#include <stddef.h>
/**
 * binary_tree_depth - main
 * @tree: clone of main tree
 * Return: depth of node
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	const binary_tree_t *clonetree = tree;

	int depth = 0;

	if (clonetree == NULL || tree == NULL)
	{
		return (0);
	}

	while (clonetree->parent != NULL)
	{
		depth++;
		clonetree = clonetree->parent;
	}

	return (depth);
}
