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
	if (tree->left || tree->right)
		return (izquierda(tree->left) - derecha(tree->right));
	return (0);
}
/**
  * derecha - function counts the nodes on the right
  * @tree: is a pointer to the root node of the tree
  * Return: number of nodes on the right
  */
int derecha(const binary_tree_t *tree)
{
	int de = 1, iz = 1;

	if (tree == NULL)
		return (0);
	if (tree->right)
		de += 0 + derecha(tree->right);
	if (tree->left)
		iz += 0 + izquierda(tree->left);
	if (iz > de)
		return (iz);
	return (de);
}
/**
  * izquierda - function counts the nodes on the left
  * @tree: is a pointer to the root node of the tree
  * Return: number of nodes on the left
  */
int izquierda(const binary_tree_t *tree)
{
	int de = 1, iz = 1;

	if (tree == NULL)
		return (0);
	if (tree->right)
		de += 0 + derecha(tree->right);
	if (tree->left)
		iz += 0 + izquierda(tree->left);
	if (iz > de)
		return (iz);
	return (de);
}
