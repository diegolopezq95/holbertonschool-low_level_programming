#include "hash_tables.h"

/**
 * hash_table_delete - deletes a hash table.
 * @ht: hash table
 * Return: pointer to the newly created hash table.
 */

void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *tmp, *next;
	unsigned int i = 0;

	if (ht == NULL)
		return;
	while (i < ht->size)
	{
		tmp = ht->array[i];
		while (tmp != NULL)
		{
			next = tmp->next;
			free(tmp->key);
			free(tmp->value);
			free(tmp);
			tmp = next;
		}
		i++;
	}
	free(ht->array);
	free(ht);
}
