#include "main.h"

/**
 * _strspn - Returns the number of bytes in the initial segment of s
 * which consist only of bytes from accept
 * @s: Apointer to the string to be searched
 * @accept: Apointer to a string containing the set of characters
 * to search from
 *
 * Return: Length of the initial segment of the first string
 * that matches the characters in the second string
 */

unsigned int _strspn(char *s, char *accept)
{
	int i, j, match, len1, len2;

	len1 = 0;
	len2 = 0;
	while (s[len1] != '\0')
	{
		len1++;
	}
	while (accept[len2] != '\0')
	{
		len2++;
	}
	for (i = 0; i < len1; i++)
	{
		match = 0;
		for (j = 0; j < len2; j++)
		{
			if (s[i] == accept[j])
			{
				match = 1;
				break;
			}
		}
		if (match == 0)
			break;
	}
	return (i);
}

