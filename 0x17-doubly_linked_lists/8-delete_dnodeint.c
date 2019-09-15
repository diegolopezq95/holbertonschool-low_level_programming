
#include "lists.h"
/**
 * delete_dnodeint_at_index - deletes the node of a dlistint_t linked list.
 * @head: pointer to pointer to listsint_t
 * @index: index of the list where the new node should be added
 * Return: 1 on success, -1 if failed.
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *tmp;
	unsigned int i;

	if (head == NULL)
	{
		return (-1);
	}
	if (*head == NULL)
	{
		return (-1);
	}
	tmp = *head;
	if (index == 0)
	{
		*head = tmp->next;
		if (tmp->next != NULL)
			tmp->prev = NULL;
		free(tmp);
		return (1);
	}
	i = 0;
	while (tmp && i == index)
	{
		if (tmp->prev != NULL)
		{
			tmp->prev->next = tmp->next;
			return (1);
		}
		if (tmp->next != NULL)
		{
			tmp->next->prev = tmp->prev;
			return (1);
		}
		tmp = tmp->next;
		i++;
	}
	return (-1);
}