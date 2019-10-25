#include "sort.h"

/**
 * insertion_sort_list - Insert sort algorithm
 * @list: Size of the array
 * Return: Nothing.
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *tmp;


	tmp = (*list)->next;
	while (tmp)
	{
		while (tmp->prev && tmp->n < tmp->prev->n)
		{
			if (tmp->next)
			{
				tmp->next->prev = tmp->prev;
			}
			tmp->prev->next = tmp->next;
			tmp->next = tmp->prev;
			tmp->prev = tmp->prev->prev;
			tmp->next->prev = tmp;
			if (tmp->prev == NULL)
			{
				*list = tmp;
			}
			else
			{
				tmp->prev->next = tmp;
			}
			print_list(*list);
		}
		tmp = tmp->next;
	}
}
