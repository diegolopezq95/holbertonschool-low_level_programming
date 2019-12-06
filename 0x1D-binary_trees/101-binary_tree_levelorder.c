#include "binary_trees.h"

/**
 * binary_tree_height - measures the height of a binary tree
 * @tree: pointer to the root node of the tree to traverse
 * Return: height
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

/**
 * binary_tree_preorder - goes through a binary tree using pre-order traversal
 * @tree: pointer to the root node of the tree to traverse
 * @func: pointer to a function to call for each node
 * @cont: level of pointer
 * Return: Nothing
 */
void binary_tree_levelorderf(const binary_tree_t *tree,
void (*func)(int), int cont)
{
	if (tree != NULL && func != NULL)
	{
		if (cont == 0)
			func(tree->n);
		else if (cont > 0)
		{
			binary_tree_levelorderf(tree->left, *func, cont - 1);
			binary_tree_levelorderf(tree->right, *func, cont - 1);
		}
	}
}




/**
 * binary_tree_levelorder - goes binary tree using level-order traversal
 * @tree: pointer to the root node of the tree to traverse
 * @func: pointer to a function to call for each node
 * Return: Nothing
 */
void binary_tree_levelorder(const binary_tree_t *tree, void (*func)(int))
{
	int level = 0, cont = 0;

	if (tree == NULL || func == NULL)
	{
		return;
	}

	level = binary_tree_height(tree);

	for (cont = 0; cont <= level; cont++)
	{
		binary_tree_levelorderf(tree, *func, cont);
	}
}
