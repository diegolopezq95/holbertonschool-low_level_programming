#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * new_dog - creates a new dog.
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 * Return: void.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *a;

	a = malloc(sizeof(struct dog));

	if (a == 0)
	{
		return (NULL);
	}
	a->name = name;
	a->age = age;
	a->owner = owner;
	return (a);
}
