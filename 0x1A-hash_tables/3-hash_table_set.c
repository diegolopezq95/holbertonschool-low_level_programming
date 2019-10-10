#include "hash_tables.h"

/**
 * hash_table_set - creates a new node.
 * @key: he key. key can not be an empty string.
 * @ht: hash table you want to add or update the key/value.
 * @value: value associated with the key.
 * Return: 1 if it succeeded, 0 otherwise.
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new

	if (ht == NULL)
		return 0;
	new = malloc(sizeof(hash_node_t));
	if (new == NULL)
		return 0;
	new->key = strdup(key);
	new->value = strdup(value);

	add_node(ht, new);
	return 1;
}

hash_table_t *add_node(hash_table_t *ht, hash_node_t *new)
{
	unsigned int key_idx;
	hash_node_t *tmp;

	key_idx = key_index(new->key, ht->size);
	tmp = ht->new[key_idx];

	while (tmp != NULL)
	{
		tmp = tmp->next;
	}


}
