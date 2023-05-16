#include "binary_trees.h"
/**
  * binary_tree_size - measures the size of a binary tree
  * @tree: pointer to the root node of the tree to measure the size
  * Return: size
  */
size_t binary_tree_size(const binary_tree_t *tree)
{
	int size;

	if (tree == NULL)
		return (0);
	size = 1;
	if (tree->left)
		size += 0 + binary_tree_size(tree->left);
	if (tree->right)
		size += 0 + binary_tree_size(tree->right);
	return (size);
}
