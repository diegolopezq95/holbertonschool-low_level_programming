#include "lists.h"
/**
 * print_listint - prints all the elements of a listint_t list.
 * @h: pointer to listsint_t
 * Return: number of nodes.
 */
size_t print_listint(const listint_t *h)
{
	size_t number;

	if (h == NULL)
		return (0);
	for (number = 1; h->next != NULL; number++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
	printf("%d\n", h->n);
	return (number);
}
