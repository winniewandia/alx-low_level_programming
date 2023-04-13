#include "main.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * string_nconcat - Concatenates 2 strings
 * @s1: First string
 * @s2: second string
 * @n: Number of bytes to copy
 *
 * Return: Pointer to concatenated string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len1, len2, len, i;
	char *s, *p1, *p2;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	len1 = 0;
	p1 = s1;
	while (*p1 != '\0')
	{
		p1++;
		len1++;
	}
	len2 = 0;
	p2 = s2;
	while (*p2 != '\0')
	{
		p2++;
		len2++;
	}
	if (n >= len2)
		n = len2;
	len = len1 + n;
	s = malloc(len + 1);
	if (s == NULL)
		return (NULL);
	for (i = 0; i < len1; i++)
	{
		s[i] = s1[i];
	}
	for (i = len1; i < len; i++)
	{
		s[i] = s2[i - len1];
	}
	s[i] = '\0';
	return (s);
}

