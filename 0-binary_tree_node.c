#include "binary_trees.h"
#include <stdlib.h>
#include <stddef.h>
#include <stdio.h>

binary_tree_t* binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t* parent_node = malloc(sizeof(binary_tree_t));
	if (parent_node == NULL)
		return NULL;
	parent_node->parent = parent;
	parent_node->left = NULL;
	parent_node->right = NULL;
	parent_node->n = value;
	return parent_node;
}
