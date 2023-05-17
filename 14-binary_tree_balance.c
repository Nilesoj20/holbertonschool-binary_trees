#include "binary_trees.h"
/**
  * binary_tree_balance - function that measures the balance factor
  * @tree: is a pointer to the root node of the tree
  * Return: the balance factor
  */
int derecha(const binary_tree_t *tree);
int izquierda(const binary_tree_t *tree);
int binary_tree_balance(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		return (0);
	if (tree->left || tree->right)
		return (izquierda(tree) - derecha(tree));
	return (0);
}
/**
  * derecha - function counts the nodes on the right
  * @tree: is a pointer to the root node of the tree
  * Return: number of nodes on the right
  */
int derecha(const binary_tree_t *tree)
{
	int de = 0;

	if (tree == NULL)
		return (0);
	if (tree->right)
		de += 1 + derecha(tree->right);
	return (de);
}
/**
  * izquierda - function counts the nodes on the left
  * @tree: is a pointer to the root node of the tree
  * Return: number of nodes on the left
  */
int izquierda(const binary_tree_t *tree)
{
	int iz = 0;

	if (tree == NULL)
		return (0);
	if (tree->left)
		iz += 1 + izquierda(tree->left);
	return (iz);
}
