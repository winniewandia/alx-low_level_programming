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
 * puts_half - Prints half of a string
 * @str: String to be printed in half
 */

void puts_half(char *str)
{
	int len;
	int i;

	len = _strlen(str);
	for (i = len / 2; i < len; i++)
	{
		if (len % 2 == 0)
		{
			_putchar(str[i]);
		}
		else
		{
			_putchar(str[i + 1]);
		}
	}
	_putchar('\n');
}
