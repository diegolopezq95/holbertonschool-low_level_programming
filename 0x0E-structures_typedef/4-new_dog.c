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
	int i, length, length2;

	length = 0;
	while (name[length] != '\0')
		length++;
	length2 = 0;
	while (owner[length2] != '\0')
		length2++;
	a = malloc(sizeof(struct dog));
	if (a == 0)
	{
		return (NULL);
	}
	a->name = malloc((length + 1) * sizeof(char));
	if (a->name == 0)
	{
		free(a);
		return (NULL);
	}
	for (i = 0; i <= length; i++)
		a->name[i] = name[i];
	a->age = age;
	a->owner = malloc((length2 + 1) * sizeof(char));
	if (a->owner == 0)
	{
		free(a->name);
		free(a);
		return (NULL);
	}
	for (i = 0; i <= length2; i++)
		a->owner[i] = owner[i];
	return (a);
}
