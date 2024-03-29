#include "binary_trees.h"
/**
  * binary_tree_height - measures the height of a binary tree
  * @tree: pointer to the root node of the tree to measure the height
  * Return: height
  */
size_t binary_tree_height(const binary_tree_t *tree)
{
	int de = 0, iz = 0;

	if (tree == NULL)
		return (0);
	if (tree->left)
		iz += 1 + binary_tree_height(tree->left);
	if (tree->right)
		de += 1 + binary_tree_height(tree->right);
	if (iz > de)
		return (iz);
	return (de);
}
