#include "lists.h"
/**
 * add_nodeint_end - adds a new node at the end of a listint_t list.
 * @head: pointer to pointer to listsint_t
 * @n: integer
 * Return: node.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *temp;
	listint_t *temprev;

	if (head == NULL)
		return (NULL);
	temp = malloc(sizeof(listint_t));

	if (temp == NULL)
	{
		return (NULL);
	}
	temp->n = n;
	if (*head == NULL)
	{
		temp->next = *head;
		*head = temp;
	}
	else
	{
		temprev = *head;
		while (temprev->next != NULL)
		{
			temprev = temprev->next;
		}
		temp->next = temprev->next;
		temprev->next = temp;
	}
	return (*head);
}
