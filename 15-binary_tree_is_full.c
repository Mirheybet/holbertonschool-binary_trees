#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>
#include "binary_trees.h"


/**
 * binary_tree_height - main
 * @tree: divided tree
 * Return: tree
 */
size_t binary_tree_height(const binary_tree_t *tree);

/**
 * binary_tree_is_full - main
 * @tree: clone  of main tree
 * Return: balance of tree
 *
 */

int binary_tree_is_full(const binary_tree_t *tree)
{
	int rightcount = 0, leftcount = 0;

	if (tree == NULL)
	{
		return (0);
	}


	leftcount += binary_tree_height(tree->left);
	rightcount += binary_tree_height(tree->right);

	if (leftcount == rightcount)
		return (1);
	else
		return (0);
}

/**
 * binary_tree_height - main
 * @tree: divided tree
 * Return: tree
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	int lc = 0, rc = 0;

	if (tree == NULL)
	{
		return (0);
	}
	lc += binary_tree_height(tree->left);
	rc += binary_tree_height(tree->right);

	if (lc == rc)
	{
		return (1);
	}

	else
	{
		return (0);
	}
}
