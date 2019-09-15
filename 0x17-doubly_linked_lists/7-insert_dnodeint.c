#include "lists.h"
/**
 * insert_dnodeint_at_index -  inserts a new node at a given position.
 * @h: pointer to pointer to dlistsint_t
 * @idx: index of the list where the new node should be added
 * @n: integer
 * Return: node.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *tmp, *new;
	unsigned int i;

	if (h == NULL)
		return (NULL);
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	tmp = *h;
	if (idx == 0)
	{
		if (*h == NULL)
		{
			*h = new;
		}
		else
		{
			new->next = tmp;
			tmp->prev = new;
			*h = new;
		}
		return (new);
	}
	for (i = 0; tmp; i++)
	{
		if (i == idx - 1)
		{
			new->next =  tmp->next;
			tmp->next = new;
			new->prev = tmp;
			return (new);
		}
		tmp = tmp->next;
		if (idx == 0)
		{
			new->next = *h;
			new->prev = NULL;
			*h = new;
			return (new);
		}
	}
	free(new);
	return (NULL);
}
