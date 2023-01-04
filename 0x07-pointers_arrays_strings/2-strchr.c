#include "main.h"

/**
 * _strchr - Locates a character in a string
 * @s: string
 * @c: character to search
 * Return: Pointer to the first occurrence of the character c in the string s
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}

		++s;
	}

	if (*s == c)
	{
		return (s);
	}


	return (0);
}
