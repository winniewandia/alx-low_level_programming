#include "main.h"

/**
 * print_line - Prints straight line on terminal
 * @n: Number of times should be printed
 */

void print_line(int n)
{
	int i;

	i = 0;
	while (i < n)
	{
		if (n <= 0)
			break;
		_putchar('_');
		i++;
	}
	_putchar('\n');
}
