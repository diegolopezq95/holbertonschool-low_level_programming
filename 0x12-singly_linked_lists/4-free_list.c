#include "lists.h"

/**
 * free_list - function that frees a list_t list.
 * @head: pointer to lists_t
 * Return: void.
 */
void free_list(list_t *head)
{
	list_t *temp;

	if (head == NULL)
		free(head);
	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp->str);
		free(temp);
	}
	free(head);
}
