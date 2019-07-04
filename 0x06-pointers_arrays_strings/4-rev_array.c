#include "holberton.h"

/**
 * reverse_array - reverses the content of an array of integers.
 * @a: array of integer
 * @n: elements in th array
 * Return: Always 0.
 */
void reverse_array(int *a, int n)
{
	int count = 0;
	int temp;

	while (count < n - 1)
	{
		temp = a[count];
		a[count] = a[n - 1];
		a[n - 1] = temp;
		count++;
		n--;
	}
}
