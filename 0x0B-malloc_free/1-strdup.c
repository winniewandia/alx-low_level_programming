#include "main.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * _strdup - Returns a pointer to a newly allocated space in memory
 * which contains a copy of the string given as a parameter
 * @str: String parameter
 *
 * Return: Pointer to a new string which is duplicate of str
 */

char *_strdup(char *str)
{
	char *new;
	long unsigned int i, len;

	if (str == NULL)
		return (NULL);
	new = malloc(sizeof(char) * sizeof(*str));
	if (new == NULL)
		return (NULL);
	len = 0;
	while (str[len] != '\0')
	{
		len++;
	}
	len++;
	for (i = 0; i < len; i++)
	{
		new[i] = str[i];
	}
	return (new);
	free(new);
}
