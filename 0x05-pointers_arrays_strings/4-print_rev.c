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
 * print_rev - Prints a string in reverse
 * @s: String to be reversed
 */

void print_rev(char *s)
{
	int len, i;

	len = _strlen(s) - 1;
	for (i = len; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
