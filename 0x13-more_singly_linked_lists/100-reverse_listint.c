#include "lists.h"
/**
 * reverse_listint - reverses a listint_t linked list.
 * @head: pointer to pointer
 * Return: node.
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *temp, *temp2, *temp3;

	if (head == NULL)
	{
		return (0);
	}
	temp = *head;
	temp2 = NULL;
	temp3 = NULL;
	while (temp)
	{
		temp2 = temp->next;
		temp->next = temp3;
		temp3 = temp;
		temp = temp2;
	}
	*head = temp3;
	return (*head);
}

