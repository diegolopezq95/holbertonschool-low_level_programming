#include "holberton.h"

/**
 * print_buffer - function that prints a buffer.
 * @b: 
 * @size: bytes of the buffer pointed by b
 * Return: Always 0.
 */
void print_buffer(char *b, int size);
{
	count = 0;
	while (s[count] != '\0')
	{
		length = 0;
		while (alf[length] != '\0')
		{
			if (s[count] == alf[length])
			{
				s[count] = rot[length];

				break;
			}
			length++;
		}
		count++;
	}
	return (s);
}
