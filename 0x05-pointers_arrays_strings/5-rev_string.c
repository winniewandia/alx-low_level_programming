#include "main.h"

/**
 * _strlen - gives the length of a string
 * @s: Input string
 *
 * Return: Length of the string
 */

int _strlen(char *s)
{
	int len;

	len = 0;
	while (*s != '\0')
	{
		len++;
		s++;
	}
	return (len);
}
/**
 * rev_string - Reverses a string
 * @s: The string to be reversed
 *
 */

void rev_string(char *s)
{
	char *start;
	char *end;
	char temp;

	end = s + _strlen(s) - 1;
	start = s;
	while (start < end)
	{
		temp = *start;
		*start = *end;
		*end = temp;
		start++;
		end--;
	}
	_putchar('\n');
}

