#include "main.h"
#include <stdio.h>

/**
 * _strchr - Locates a character in a string.
 * @s: string to search
 * @c: character to locate
 *
 * Return: a pointer to the first occurence if c is located.
 *         if not then return NULL.
 */

char *_strchr(char *s, char c)
{
	int j;

	for (j = 0; s[j] >= '\0'; j++)
	{
		if (s[j] == c)
		{
			return (s + j);
		}
	}

	return (NULL);
}
