#include "lists.h"
/**
 * get_dnodeint_at_index - returns the nth node of a listint_t linked list.
 * @head: pointer to listsint_t
 * @index: index of the node
 * Return: node.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *tmp;
	size_t i;

	tmp = head;
	if (head == NULL)
		return (NULL);
	for (i = 0; tmp != NULL; i++)
	{
		if (i == index)
			return (tmp);
		tmp = tmp->next;
	}
	return (tmp);
}
