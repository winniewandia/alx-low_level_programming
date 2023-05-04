#include "main.h"

/**
 * _power - returns the power of a base number
 * @base: The base number
 * @pow: The number the base is raised to
 *
 * Return: Base raised to power
 */

unsigned int _power(unsigned int base, unsigned int pow)
{
	unsigned int result, i;

	result = 1;
	for (i = 0; i < pow; i++)
	{
		result *= base;
	}
	return (result);
}
/**
 * binary_to_uint - converts binary to decimal
 * @b: Points to a string of 0 and 1 chars
 *
 * Return: The converted number or 0 if
 * there are 1 or more chars in b that is not 0 or 1
 * b is NULL
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int i, ui, j;
	unsigned int result = 0;

	if (!b)
		return (0);
	for (j = 0; b[j]; j++)
		;
	for (i = j - 1; i < j; i--)
	{
		if (b[i] == '0' || b[i] == '1')
		{
			ui = b[i] - '0';
			result += ui * _power(2, j - 1 - i);
		}
		else
		{
			return (0);
		}
	}
	return (result);
}

