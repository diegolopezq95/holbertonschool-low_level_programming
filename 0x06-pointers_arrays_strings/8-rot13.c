#include "holberton.h"

/**
 * *rot13 - function that encodes a string using rot13.
 * @s: array of integer
 * Return: Always 0.
 */
char *rot13(char *s)
{
	int count = 0;
	int length = 0;
	char rot[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	char alf[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";

	count = 0;
	while (s[count] != '\0')
	{
		length = 0;
		while (alf[length] != '\0')
		{
			if (s[count] == alf[length])
			{
				s[count] = rot[length];
			}
			
			length++;
		}
		count++;
	}
	return (s);
}
