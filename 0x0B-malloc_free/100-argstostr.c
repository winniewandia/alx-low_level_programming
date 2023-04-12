#include "main.h"
#include <stdlib.h>
#include <stddef.h>
#include <string.h>

/**
 * argstostr - Concatenates all arguments of a program
 * @ac: Number of arguments
 * @av: Arguments
 *
 * Return: Pointer to concatenated string
 */

char *argstostr(int ac, char **av)
{
	char *new, *result;
	int i, len, j;

	if (ac == 0 || av == NULL)
		return (NULL);
	len = 0;
	for (i = 0; i < ac; i++)
	{
		result = av[i];
		while (*result != '\0')
		{
			len++;
			result++;
		}
		len++;
	}
	new = malloc(sizeof(char) * len + 1);
	if (new == NULL)
		return (NULL);
	j = 0;
	for (i = 0; i < ac; i++)
	{
		result = av[i];
		while (*result != '\0')
		{
			new[j] = *result;
			result++;
			j++;
		}
		new[j] = '\n';
		j++;
	}
	new[j] = '\0';
	return (new);
}

