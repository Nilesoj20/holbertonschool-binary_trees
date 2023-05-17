#include "binary_trees.h"
/**
  * binary_tree_sibling - function that finds the sibling of a node
  * @node:  is a pointer to the node to find the sibling
  * Return: sibling node value
  */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	int yo, bro;

	if (node == NULL || node->parent == NULL)
		return  (NULL);
	if (!node->parent->left->n || !node->parent->right->n)
		return (NULL);
	yo = node->parent->left->n;
	bro = node->parent->right->n;
	if (yo == node->n)
		return (node->parent->right);
	if (bro == node->n)
		return (node->parent->left);
	return (NULL);
}
