#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * strtow - Splits a string into words
 * @str: The string to be splited
 *
 * Return: Splitted string
 */

char **strtow(char *str)
{
	int num_words, i, j;
	char *p, *start;
	char **words;

	if (str == NULL || *str == '\0')
		return (NULL);
	num_words = 0;
	for (p = str; *p != '\0'; p++)
	{
		if (*p != ' ' && (*(p+1) == ' ' || *(p+1) == '\0'))
		{
			num_words++;
		}
	}
	words = malloc(sizeof(char *) * (num_words + 1));
	if (words == NULL)
	{
		return (NULL);
	}
	memset(words, 0, sizeof(char *) * (num_words + 1));
	i = 0;
	for (p = str; *p != '\0'; )
	{
		if (*p == ' ')
		{
			p++;
			continue;
		}
		start = p;
		while (*p != ' ' && *p != '\0')
		{
			p++;
		}
		words[i] = malloc(sizeof(char) * (p - start + 1));
		if (words[i] == NULL)
		{
			for(j = 0; j < i; j++)
			{
				free(words[j]);
			}
			free(words);
			return (NULL);
		}
		strncpy(words[i], start, p - start);
		words[i][p - start] = '\0';
		i++;
	}
	words[num_words] = NULL;
	return (words);
}

