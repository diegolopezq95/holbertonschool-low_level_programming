#include "binary_trees.h"

/**
 * binary_tree_balance - measures the height of a binary tree
 * @tree: pointer to the root node of the tree to traverse
 * Return: height
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	size_t cont, cont2;

	if (tree == NULL)
	{
		return (0);
	}
	cont = binary_tree_height(tree->left);
	cont2 = binary_tree_height(tree->right);
	return (cont - cont2);
}
/**
 * binary_tree_height - measures the height of a binary tree
 * @tree: pointer to the root node of the tree to traverse
 * Return: height
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t cont = 1, cont2 = 1;

	if (tree == NULL)
	{
		return (0);
	}
	if (tree->left == NULL && tree->right == NULL)
	{
		return (1);
	}
	else
	{
		cont = binary_tree_height(tree->left);
		cont2 = binary_tree_height(tree->right);
		if (cont >= cont2)
		{
			return (cont + 1);
		}
		else
		{
			return (cont2 + 1);
		}
	}
}
