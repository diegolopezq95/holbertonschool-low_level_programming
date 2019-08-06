#include "lists.h"
/**
 * get_nodeint_at_index - returns the nth node of a listint_t linked list.
 * @head: pointer to listsint_t
 * @index: index of the node
 * Return: node.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *temp;
	unsigned int i;

	if (head == NULL)
	{
		return (0);
	}
	temp = head;
	for (i = 0; temp; i++)
	{
		if (i == index)
		{
			return (temp);
		}
		temp = temp->next;
	}
	return (temp);
}
