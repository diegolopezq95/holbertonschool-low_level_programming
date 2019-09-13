#include "lists.h"
/**
 * free_listint2 - frees a listint_t list.
 * @head: pointer to pointer to listsint_t
 * Return: .
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp;

	if (head == NULL)
		return;
	tmp = head;
	while (tmp->next != NULL)
	{
		tmp = tmp->next;
		free(head);
		head = tmp;
	}
	free(head->next);
	free(head);
}
