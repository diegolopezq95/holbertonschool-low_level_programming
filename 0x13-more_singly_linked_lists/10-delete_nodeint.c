#include "lists.h"
/**
 * delete_nodeint_at_index - deletes the node of a listint_t linked list.
 * @head: pointer to pointer to listsint_t
 * @index: index of the list where the new node should be added
 * Return: 1 on success, -1 if failed.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp, *next;
	unsigned int i;

	if (head == NULL)
	{
		return (-1);
	}
	if (*head == NULL)
	{
		return (-1);
	}
	temp = *head;
	if (index == 0)
	{
		*head = temp->next;
		free(temp);
		return (1);
	}
	i = 0;
	while (temp && i < index - 1)
	{
		temp = temp->next;
		i++;
	}
	if (temp == NULL || temp->next == NULL)
		return (-1);
	next = temp->next->next;
	free(temp->next);
	temp->next = next;
	return (1);
}

