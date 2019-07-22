#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_dog - frees dogs.
 * @d: pointer
 * Return: void.
 */
void free_dog(dog_t *d)
{
	if (d == 0)
	{
		return (NULL);
	}
	free(d->name);
	free(d->owner);
	free(d);
}
