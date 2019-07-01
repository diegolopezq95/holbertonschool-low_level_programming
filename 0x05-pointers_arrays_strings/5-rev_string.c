#include "holberton.h"

/**
 * rev_string - function that reverses a string.
 * @s: string to print.
 * Return: Always 0.
 */
void rev_string(char *s)
{
	int length = 0;
	int htgnel = 0;
	char temp;

	while (s[length] != '\0')
	{
		length++;
	}
	while (length - 1 > htgnel)
	{
		temp = s[htgnel];
		s[htgnel] = s[length - 1];
		s[length - 1] = temp;
		htgnel++;
		length--;
	}
}
