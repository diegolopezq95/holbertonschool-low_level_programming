#include "lists.h"
/**
 * listint_len - function that returns the number of elements in listint_t.
 * @h: pointer to listsint_t
 * Return: number of nodes.
 */
size_t listint_len(const listint_t *h)
{
	size_t number;

	if (h == NULL)
		return (0);
	for (number = 1; h->next != NULL; number++)
	{
		h = h->next;
	}
	return (number);
}
