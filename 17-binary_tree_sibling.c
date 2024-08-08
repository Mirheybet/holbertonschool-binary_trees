#include <stddef.h>
#include "binary_trees.h"

/**
 * binary_tree_sibling - main
 * @node: node
 * Return: sibling
 */


binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	binary_tree_t *clone;
	
	if (node == NULL || node->parent == NULL)
	{
		return (NULL);
	}

	*clone = node->parent;

	if (clone->right == node)
	{
		return (clone->left);
	}

	if (clone->left == node)
	{
		return (clone->right);
	}

	return (NULL);
}
