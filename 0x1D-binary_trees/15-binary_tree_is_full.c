#include "binary_trees.h"

/**
 * binary_tree_is_full - checks if a binary tree is full
 * @tree: pointer to the root node of the tree to traverse
 * Return: If tree is NULL, your function must return 0
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	size_t cont = 0, cont2 = 0;

	if (tree == NULL)
	{
		return (0);
	}
	else
	{
		cont = binary_tree_is_full(tree->left);
		cont2 = binary_tree_is_full(tree->right);
		if (tree->left == NULL && tree->right == NULL)
		{
			return (1);
		}
		else if (tree->left != NULL && tree->right != NULL)
		{
			return (cont && cont2);
		}
		else
		{
			return (0);
		}
	}
}
