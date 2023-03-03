#include "binary_trees.h"
#include <stdlib.h>
#include <string.h>

/**
 * binary_tree_insert_left - inserts a node as the left-child of another node
 * @parent: parent node of the node
 * @value: value of the new node
 * Return: the a pointer to the created node, or NULL on failure or if parent is NULL
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t* cur_left_node;

	if (parent == NULL)
	{
		return (NULL);
	}

	if (parent->left == NULL)
	{

		parent->left = binary_tree_node(parent, value);
	}

	else
	{
		cur_left_node = parent->left;
		parent->left = binary_tree_node(parent, value);
		parent->left->left = cur_left_node;
		cur_left_node->parent = parent->left;
	}

	return (parent->left);
}
