#include "binary_trees.h"

/**
 * binary_tree_depth - measures the depth of a node in a binary tree
 * @tree: pointer to the root node of the tree to traverse
 * Return: depth
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t cont = 0;

	if (tree == NULL || (tree->parent == NULL))
	{
		return (0);
	}
	else
	{
		cont = binary_tree_depth(tree->parent);
		return (cont + 1);
	}
}
/**
 * binary_trees_ancestor - lowest common ancestor of two nodes
 * @first: pointer to the first node
 * @second: is a pointer to the second node
 * Return: pointer to the lowest common ancestor node
 */
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
const binary_tree_t *second)
{
	size_t first_depth, second_depth, dif = 0, cont = 0;
	binary_tree_t *ojo = (binary_tree_t *)first, *ojo2 = (binary_tree_t *)second;

	first_depth = binary_tree_depth(first);
	second_depth = binary_tree_depth(second);


	if (first_depth > second_depth)
	{
		dif = first_depth - second_depth;
		while (dif != cont)
		{
			ojo = ojo->parent;
			cont++;
		}
	}
	else
	{
		dif = second_depth - first_depth;
		while (dif != cont)
		{
			ojo2 = ojo2->parent;
			cont++;
		}
	}
	while (ojo != ojo2)
	{
		ojo = ojo->parent;
		ojo2 = ojo2->parent;
	}
	return (ojo);

}
