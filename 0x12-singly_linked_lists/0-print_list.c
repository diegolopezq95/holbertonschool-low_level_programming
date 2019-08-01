#include "lists.h"
/**
 * print_list - prints all elements of a list_t list
 * @h: pointer to lists_t
 * Return: number of nodes.
 */
size_t print_list(const list_t *h)
{
	int n;

	for (n = 1; h->next != NULL; n++)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)");
		}
		else
		{
			printf("[%u] %s\n", h->len, h->str);
		}
		h = h->next;
	}
	printf("[%u] %s\n", h->len, h->str);
	return (n);
}
