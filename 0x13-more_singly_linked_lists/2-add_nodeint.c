#include "lists.h"
/**
 * add_nodeint - adds a new node at the beginning of a listint_t list.
 * @head: pointer to pointer to listsint_t
 * @n: integer
 * Return: node.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *temp;

	if (head == NULL)
		return (NULL);
	temp = malloc(sizeof(listint_t));

	if (temp == NULL)
	{
		return (NULL);
	}
	if (*head == NULL)
	{
		temp->next = NULL;
	}
	else
	{
		temp->next = *head;
	}
	temp->n = n;
	*head = temp;
	return (*head);
}
