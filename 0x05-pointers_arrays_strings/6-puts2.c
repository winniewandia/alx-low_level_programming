#include "main.h"

/**
 * puts2 - prints every other character of a string
 * starting with the first one
 * @str: String to be printed
 */

void puts2(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] % 2 == 0)
		{
			_putchar(str[i]);
		}
		str++;
	}
	_putchar('\n');
}
