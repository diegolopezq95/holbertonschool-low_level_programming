#include "hash_tables.h"

/**
 * hash_table_create - creates a hash table.
 * @size: size of the array
 * Return: pointer to the newly created hash table.
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *ht;
	hash_node_t **array;

	if (size < 1)
		return NULL;
	ht = malloc(sizeof(hash_table_t));
	if (ht == NULL)
		return NULL;
	array = malloc(sizeof(hash_node_t) * size);
	if (array == NULL)
		return NULL;
	ht->array = array;
	ht->size = size;
	return ht;
}
