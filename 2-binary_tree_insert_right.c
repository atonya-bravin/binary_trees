#include "binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_insert_right - inserts a node as the right-child of another node
 * @parent: the parent of the node
 * @value: the value of the node
 * Return: if node is added, return the new node, else return NULL
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *temp_node;

	if (parent == NULL)
		return (NULL);

	if (parent->right == NULL)
		parent->right = binary_tree_node(parent, value);

	else
	{
		temp_node = parent->right;
		parent->right = binary_tree_node(parent, value);
		parent->right->right = temp_node;
		temp_node->parent = parent->right;
	}

	return (parent->right);

}
