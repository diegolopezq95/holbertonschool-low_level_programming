#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * chars - count characters
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
 * words - count words
 * @str: pointer string.
 * Return:.
 */
int _words(char *str)
{
	int words = 0;

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
	int countchars, countwords, i = 0 ,j;

	if (*str == 0 || str == "")
	{
		return (NULL);
	}
	countwords = _words(str);
	a = (char **) malloc((countwords + 1) * sizeof(char *));
	if (a == 0 || numwords == 0 || words == 0)
	{
		free(a);
		return (NULL);
	}
	while (str[chars] != '\0')
	{
		if (str[chars] == ' ')
		{
			chars++;
		}
		else
		{
			countchars = _characters(str);
			a[i] = (char *) malloc((countchars + 1) * sizeof(char));
			if (a[i] == 0)
			{
				for (j = 0; j < i; j++)
				{
					free(a[j]);
				}
				free(a);
				return (NULL);
			}
			for (i = 0; i < countchars; i++)
			{
				for (j = 0; a[i][j] != '\0'; j++; chars++)
				{
					a[i][j] = str[chars];
					a[i][j] = '\0';
					i++;
				}
				
			}
		}
	}
	return (a)
}
