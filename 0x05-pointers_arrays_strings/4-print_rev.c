#include "main.h"

/**
 * print_rev - Prints a string in reverse
 * @s: String to be reversed
 */

void print_rev(char *s)
{
	char *end;
	char temp;

	end = s + _strlen(s) - 1;
	while (s < end)
	{
		temp = *s;
		*s++ = *end;
		*end = temp;
	}
	_putchar('\n');
}
