#include "lists.h"
/**
 * sum_listint - returns the sum of all the data (n) of a listint_t linked list
 * @head: pointer to pointer to listsint_t
 * Return: node.
 */
int sum_listint(listint_t *head)
{
	listint_t *temp;
	unsigned int sum = 0;

	if (head == NULL)
	{
		return (0);
	}
	temp = head;
	while (temp)
	{
		sum += temp->n;
		temp = temp->next;
	}
	return (sum);
}
