#include "binary_trees.h"
/**
  * binary_tree_is_perfect - function that checks if tree is perfect
  * @tree: is a pointer to the root node of the tree
  * Return: it's perfet 1, it is not perfet 0
  */
int derecha(const binary_tree_t *tree);
int izquierda(const binary_tree_t *tree);
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		return (1);
	if (tree->left == NULL || tree->right == NULL)
		return (0);
	if (derecha(tree->right) == izquierda(tree->left))
		return (1);
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
	if (tree->left)
		de += 1 + derecha(tree->left);
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
	if (tree->right)
		iz += 1 + izquierda(tree->right);
	return (iz);
}
