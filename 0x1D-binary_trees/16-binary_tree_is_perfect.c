#include "binary_trees.h"

int _pow(int i, size_t x);

/**
 * binary_tree_is_perfect - checks if a binary tree is perfect
 * @tree: pointer to the root node of the tree to traverse
 * Return: If tree is NULL, your function must return 0
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int _power = 0;

	if (tree == NULL)
	{
		return (0);
	}
	_power = _pow(2, binary_tree_height(tree) + 1);
	if (binary_tree_size(tree) == ((size_t)_power - 1))
	{
		return (1);
	}
	return (0);
}
/**
 * _pow - return a pow of 2 to x number
 * @i: 2
 * @x: number to pow
 * Return: pow
 */
int _pow(int i, size_t x)
{
	size_t a = 1;

	while (a != x)
	{
		a++;
		i = i * 2;
	}
	return (i);
}

/**
 * binary_tree_size - measures the size of a binary tree
 * @tree: pointer to the root node of the tree to traverse
 * Return: size of the tree
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t cont = 0, cont2 = 0;

	if (tree == NULL)
	{
		return (0);
	}
	else
	{
		cont = binary_tree_size(tree->left);
		cont2 = binary_tree_size(tree->right);
		return (cont + cont2 + 1);
	}
}
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
