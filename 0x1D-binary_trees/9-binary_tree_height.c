#include "binary_trees.h"

/**
 * binary_tree_height - measures the height of a binary tree
 * @tree: pointer to the root node of the tree to traverse
 * @func: pointer to a function to call for each node
 * Return: Nothing
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t cont = 0, cont2 = 0;

	if (tree == NULL || (tree->left == NULL && tree->right == NULL))
	{
		return (0);
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
			return (cont2 + 1);
	}
}
