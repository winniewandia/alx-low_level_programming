#include "main.h";

/**
 * rev_string - Reverses a string
 * @s: The string to be reversed
 *
 */

void rev_string(char *s)
{
	char *end;
	char temp;

	end = s + _strlen(s) - 1;
	while (s < end)
	{
		temp = s++;
		*s++ = *end;
		*end-- = temp;
	}
	_putchar('\n');
}

