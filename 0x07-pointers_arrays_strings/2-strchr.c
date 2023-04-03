#include "main.h"
#include <stddef.h>

/**
 * _strchr - Locates a character in a string
 * @s: String that the character is searched
 * @c: Character to be searched
 *
 * Return: Apointer to first occurence of
 * character, else null
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return ((char *)s);
		}
		s++;
	}
	return (NULL);
}

