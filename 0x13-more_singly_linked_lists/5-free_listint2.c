#include "lists.h"
/**
 * free_listint2 - frees a listint_t list.
 * @head: pointer to pointer to listsint_t
 * Return: .
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (head == NULL)
		return;
	if (*head == NULL)
		free(head);
	while (*head != NULL)
	{
		temp = *head;
		*head = (*head)->next;
		free(temp);
	}
	free(*head);
}
