#include "lists.h"

/**
 * print_dlistint - prints all the elements of a listint_t list.
 * @h: pointer to listsint_t
 * Return: number of nodes.
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t i;

	if (h == NULL)
		return (0);
	for (i = 1; h->next != NULL; i++)
	{
		printf("%i\n", h->n);
		h = h->next;
	}
	printf("%i\n", h->n);
	return (i);
}
