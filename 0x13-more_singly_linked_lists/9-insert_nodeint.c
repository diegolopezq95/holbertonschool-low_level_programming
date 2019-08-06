#include "lists.h"
/**
 * insert_nodeint_at_index -  inserts a new node at a given position.
 * @head: pointer to pointer to listsint_t
 * @idx: index of the list where the new node should be added
 * @n: integer
 * Return: node.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *temp, *tempinsert;
	unsigned int i;

	if (head == NULL)
	{
		return (0);
	}
	tempinsert = malloc(sizeof(listint_t));
	if (tempinsert == NULL)
	{
		return (NULL);
	}
	else
	{
		tempinsert->n = n;
		temp = *head;
		i = 1;
		while (temp)
		{
			if (i == idx)
			{
				tempinsert->next = temp->next;
				temp->next = tempinsert;
				return (tempinsert);
			}
			temp = temp->next;
			i++;
		}
	}
	return (NULL);
}

