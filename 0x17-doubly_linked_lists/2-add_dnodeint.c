#include "lists.h"
/**
 * add_dnodeint - adds a new node at the beginning of a listint_t list.
 * @head: pointer to pointer to listsint_t
 * @n: integer
 * Return: node.
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new, *tmp;

	if (head == NULL)
		return (NULL);
	tmp = *head;
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = *head;
	new->prev = NULL;
	if (tmp != NULL)
	{
		tmp->prev = new;
	}
	*head = new;
	return (new);
}
