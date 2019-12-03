#include "binary_trees.h"

/**
 * binary_tree_nodes - counts the nodes with at least 1 child in binary tree
 * @tree: pointer to the root node of the tree to traverse
 * Return: size of the tree
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t cont = 0, cont2 = 0;

	if (tree == NULL)
	{
		return (0);
	}
	else
	{
		cont = binary_tree_nodes(tree->left);
		cont2 = binary_tree_nodes(tree->right);
		if (tree->left != NULL || tree->right != NULL)
		{
			return (cont + cont2 + 1);
		}
		else
			return (0);
	}
}
