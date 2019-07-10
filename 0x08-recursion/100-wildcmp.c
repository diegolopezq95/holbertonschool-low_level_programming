#include "holberton.h"

/**
 * wildcmp - compares two strings with wildcard.
 * @s1: string 1
 * @s2: string 2 with wildcards
 * Return: .
 */
int wildcmp(char *s1, char *s2)
{
	if (*s1 == '\0' && *s2 == '\0')
	{
		return (1);
	}
	if (*s2 == '?' || (*s1 == *s2 && *s1 != '\0' && *s2 != '\0'))
	{
		return (wildcmp(s1 + 1, s2 + 1));
	}
	if (*s2 == '*')
	{
		return (wildcmp(s1, s2 + 1) || wildcmp(s1 + 1, s2));
	}
	return (0);
}
