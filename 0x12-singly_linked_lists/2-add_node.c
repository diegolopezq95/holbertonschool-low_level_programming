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
 * add_note - function that adds a new node at the beginning of a list_t list.
 * @head: First node
 * @str: pointer to string
 * Return: number of nodes.
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *temp;

	if (head == NULL)
	{
		return (NULL);
	}
	temp = malloc(sizeof(list_t));
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
	temp->str = strdup(str);
	temp->len = _strlen(str);
	*head = temp;
	return (*head);
}
