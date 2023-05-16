#include "binary_trees.h"
/**
 * binary_tree_insert_right - inserts a node as the right-child of another node
 * @parent: a pointer to the node to insert the right-child in
 * @value: value to put in the new nodo
 * Return:: pointer to the nodo right
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	int tmp;

	if (parent == NULL)
		return (NULL);
	if (parent->right == NULL)
	{
		parent->right = binary_tree_node(parent, value);
		return (parent->right);
	}
	else
	{
		tmp = parent->right->n;
		parent->right->n = value;
		parent->right->right = binary_tree_node(parent->right, tmp);
		return (parent->right->right);
	}
	return (NULL);
}
