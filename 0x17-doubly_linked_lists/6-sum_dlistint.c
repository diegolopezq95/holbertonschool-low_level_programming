#include "lists.h"
/**
 * sum_dlistint - returns the sum of all the data (n) of a linked list
 * @head: pointer to listsint_t
 * Return: node.
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *tmp;
	size_t i;
	unsigned int sum = 0;

	tmp = head;
	if (head == NULL)
		return (0);
	for (i = 0; tmp != NULL; i++)
	{
		sum += tmp->n;
		tmp = tmp->next;
	}
	return (sum);
}
