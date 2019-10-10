#include "hash_tables.h"

/**
 * key_index - gives you the index of a key.
 * @size: size of the array of the has table
 * @key: The key to find in the has table
 * Return: the index at which the key/value pair should be stored.
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int key_index = 0;
	unsigned long int i = 0;

	i = hash_djb2(key);
	key_index = i % size;
	return (key_index);
}
