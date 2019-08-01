#include "lists.h"
/**
 * list_len - function that returns n elements in a linked list_t list.
 * @h: pointer to lists_t
 * Return: number of nodes.
 */
size_t list_len(const list_t *h)
{
	int n;
	n = 0;

	for (n = 1; h->next != NULL; n++)
	{
		h = h->next;
	}
	return (n);
}
