#include "holberton.h"

/**
 * *cap_string - function that capitalizes all words of a string.
 * @s: array of integer
 * Return: Always 0.
 */
char *cap_string(char *s)
{
	int count = 0;

	while (s[count] != '\0')
	{
		if (s[0] >= 'a' && s[0] <= 'z')
		{
			s[0] = (s[0] - 32);
		}
		if (s[count - 1] == ' ' && s[count] >= 'a' && s[count] <= 'z')
		{
			s[count] = (s[count] - 32);
		}
		if (s[count - 1] == '.' && s[count] >= 'a' && s[count] <= 'z')
		{
			s[count] = (s[count] - 32);
		}
		if (s[count - 1] == '\t' && s[count] >= 'a' && s[count] <= 'z')
		{
			s[count] = (s[count] - 32);
		}
		if (s[count - 1] == '\n' && s[count] >= 'a' && s[count] <= 'z')
		{
			s[count] = (s[count] - 32);
		}
		count++;
	}
	return (s);
}
