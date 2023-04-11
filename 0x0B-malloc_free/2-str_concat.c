#include "main.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * str_concat - Concatenates 2 strings
 * @s1: First string to be concatenated
 * @s2: Second string to be concatenated
 *
 * Return: Concatenated string
 */

char *str_concat(char *s1, char *s2)
{
	int i, len, len1, len2;
	char *s3;

	if (!(s1))
		s1 = "";
	if (!(s2))
		s2 = "";
	len1 = 0;
	len = 0;
	while (s1[len1] != '\0')
	{
		len1++;
		len++;
	}
	len2 = 0;
	while (s2[len2] != '\0')
	{
		len2++;
		len++;
	}
	len++;
	s3 = malloc(sizeof(char) * len);
	if (s3 == NULL)
		return (NULL);
	for (i = 0; i < len1; i++)
	{
		s3[i] = s1[i];
	}
	for (i = len1; i <= len; i++)
	{
		s3[i] = s2[i - len1];
	}
	return (s3);
}
