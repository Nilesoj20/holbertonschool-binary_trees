#include "binary_trees.h"
/**
 * binary_tree_insert_left - inserts a node as the left-child of another node
 * @parent: a pointer to the node to insert the left-child in
 * @value: value to put in the new nodo
 * Return:: pointer to the nodo left
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	int tmp;

	if (parent == NULL)
		return (NULL);
	if (parent->left == NULL)
		parent->left = binary_tree_node(parent, value);
	else
	{
		tmp = parent->left->n;
		parent->left->n = value;
		parent->left->left = binary_tree_node(parent->left, tmp);
	}
	return (NULL);
}
