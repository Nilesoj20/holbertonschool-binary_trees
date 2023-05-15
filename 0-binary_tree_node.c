#include "binary_trees.h"
/**
  * binary_tree_node - crate new binary tree node
  * @parent: pointer to the parent node of the node to create
  * @value: value to put in the new node
  * Return: pointer to the  new node
  */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *nuevo;

	if (parent == NULL)
	{
		parent = malloc(sizeof(binary_tree_t));
		if (parent == NULL)
		{
			printf("malloc falló\n");
			return (NULL);
		}
		parent->n = value;
		parent->parent = NULL;
		parent->left = NULL;
		parent->right = NULL;
		return (parent);
	}
	nuevo = malloc(sizeof(binary_tree_t));
	if (nuevo == NULL)
	{
		printf("Malloc falló\n");
		free(parent);
		return (NULL);
	}
	nuevo->n = value;
	nuevo->parent = parent;
	nuevo->left = NULL;
	nuevo->right = NULL;
	return (nuevo);
}
