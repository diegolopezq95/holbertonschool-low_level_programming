#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _characters - count characters
 * @str: pointer string.
 * Return:.
 */
int _characters(char *str)
{
	int chars = 0;

	while (str[chars] != '\0')
	{
		if (str[chars] == ' ')
		{
			break;
		}
		chars++;
	}
	return (chars);
}

/**
 * _words - count words
 * @str: pointer string.
 * Return:.
 */
int _words(char *str)
{
	int chars = 0, words = 0;

	while (str[chars] != '\0')
	{
		if (str[chars] == ' ')
		{
			if (str[chars + 1] == ' ' || str[chars + 1] == '\0')
			{
				words++;
			}
			chars++;
		}
		else
		{
			chars++;
		}
	}
	return (words);
}

/**
 * **strtow - splits a string into words.
 * @str: pointer string.
 * Return:.
 */
char **strtow(char *str)
{
	char **a;
	int countchars = 0, countwords = 0, chars = 0, i = 0, j = 0;

	if (*str == '\0' || str == 0)
		return (NULL);
	countwords = _words(str);
	if (countwords == 0)
	{
		return (NULL);
	}
	a = (char **) malloc((countwords + 1) * sizeof(char *));
	if (a == 0)
	{
		free(a);
		return (NULL);
	}
	while (str[chars] != '\0')
	{
		if (str[chars] == ' ')
			chars++;
		else
		{
			countchars = _characters(str + chars);
			a[i] = (char *) malloc((countchars + 1) * sizeof(char));
			if (a[i] == 0)
			{
				for (j = 0; j <= i; j++)
					free(a[j]);
				free(a);
				return (NULL);
			}
			for (j = 0; j < countchars; j++, chars++)
				a[i][j] = str[chars];
			a[i][j] = '\0';
			i++;
		}
	}
	a[countwords] = 0;
	return (a);
}
