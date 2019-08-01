#include "lists.h"

/**
 * _strlen - returns the length of a string.
 * @s: string
 * Return: Always 0.
 */
int _strlen(const char *s)
{
	int length = 0;

	while (s[length] != '\0')
	{
		length++;
	}
	return (length);
}

/**
 * add_node_end - function that adds a new node at the end of a list_t list.
 * @head: first node
 * @str: string to print
 * Return: number of nodes.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *temp;
	list_t *temprev;

	temp = malloc(sizeof(list_t));
	if (temp == NULL)
	{
		return (NULL);
	}
	temp->str = strdup(str);
	temp->len = _strlen(str);
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
