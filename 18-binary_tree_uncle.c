#include "binary_trees.h"
/**
  * binary_tree_uncle - function that finds the uncle of a node
  * @node: pointer to the node to find the uncle
  * Return: uncle
  */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	int tio, pa;

	if (node == NULL)
		return (NULL);
	if (node->parent->parent->left == NULL || node->parent->parent->right == NULL)
		return (NULL);
	if (node->parent->parent == NULL)
		return (NULL);
	tio = node->parent->parent->left->n;
	pa = node->parent->parent->right->n;
	if (tio == node->parent->n)
		return (node->parent->parent->right);
	if (pa == node->parent->n)
		return (node->parent->parent->left);
	return (NULL);
}
