#include "binary_trees.h"

/**
 * binary_tree_sibling - finds the sibling of a node
 * @node: pointer to the root node of the tree to traverse
 * Return: node sibling, otherwise NULL
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL)
	{
		return (NULL);
	}
	if (node->parent->right != NULL && node->parent->left == node)
	{
		return (node->parent->right);
	}
	else if (node->parent->left != NULL && node->parent->right == node)
	{
		return (node->parent->left);
	}
	else
	{
		return (NULL);
	}
}
/**
 * binary_tree_uncle - finds the uncle of a node
 * @node: pointer to the root node of the tree to traverse
 * Return: node sibling, otherwise NULL
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
        if (node == NULL || node->parent == NULL)
        {
                return (NULL);
        }
        else
        {
		return (binary_tree_sibling(node->parent));
	}
}
