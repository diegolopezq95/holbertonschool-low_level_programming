#include "lists.h"
/**
 * add_dnodeint - adds a new node at the beginning of a listint_t list.
 * @head: pointer to pointer to listsint_t
 * @n: integer
 * Return: node.
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	if (head == NULL)
		return (NULL);
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	if (*head == NULL)
	{
		new->next = (*head);
	}
	else
	{
		new->next = *head;
		new->prev = NULL;
	}
	new->n = n;
	*head = new;
	return (new);
}
