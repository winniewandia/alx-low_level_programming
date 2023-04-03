#include "main.h"
#include <stddef.h>

/**
 * _strstr - finds the first occurrence of the substring
 * needle in the string haystack
 * @haystack: string in which we want to search for a substring
 * @needle: substring we want to find
 *
 * Return: pointer to the first occurrence of the substring
 */

char *_strstr(char *haystack, char *needle)
{
	int i, j, len;

	if (*needle == '\0')
		return haystack;
	len = 0;
	while (needle[len] != '\0')
	{
		len++;
	}
	i = 0;
	while (haystack[i] != '\0')
	{
		if (haystack[i] == needle[0])
		{
			for (j = 1; needle[j] != '\0' && haystack[i + j] == needle[j]; j++)
			{
				;
			}
			if (j == len)
			{
				return (haystack + i);
			}
		}
		i++;
	}
	return (NULL);
}

