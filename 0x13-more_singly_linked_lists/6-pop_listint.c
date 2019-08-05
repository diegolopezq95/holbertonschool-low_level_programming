#include "lists.h"
/**
 * pop_listint - deletes the head node, and returns the head node’s data (n).
 * @head: pointer to pointer to listsint_t
 * Return: node.
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int d;

	if (head == NULL)
	{
		return (0);
	}
	if (*head == NULL)
	{
		return (0);
	}
	temp = *head;
	d = temp->n;
	*head = temp->next;
	free(temp);
	return (d);
}
