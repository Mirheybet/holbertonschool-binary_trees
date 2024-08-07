#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

/**
 * binary_tree_insert_left - inserts a node
 * @parent: pointer to the node to insert
 * @value: the value to store in the new node
 * Return: Always 0.
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *node;

	if (parent == NULL)
		return (NULL);

	node = binary_tree_node(parent, value);

	if (node == NULL)
		return (NULL);

	if (parent->left != NULL)
	{
		node->left = parent->left;
		parent->left->parent = node;
	}
	parent->left = node;
	return (node);
}
