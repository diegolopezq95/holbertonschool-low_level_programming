#include "dog.h"
#include <stdio.h>

/**
 * print_dog - prints a struct dog
 * @d: pointer to struct
 * Return: void.
 */
void print_dog(struct dog *d)
{
	if (d == 0)
		return;
	if (d->name == 0)
	{
		printf("Name: (nil)\n");
	}
	if (d->age == 0.0)
	{
		printf("Age: (nil)\n");
	}
	if (d->owner == 0)
	{
		printf("Owner: (nil)\n");
	}
	printf("Name: %s\n", d->name);
	printf("Age: %f\n", d->age);
	printf("Owner: %s\n", d->owner);
}
