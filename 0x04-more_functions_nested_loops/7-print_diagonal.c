#include "main.h"

/**
 * print_diagonal - Draws diagonal line on terminal
 * @n: Number of times the line is printed
 */

void print_diagonal(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (n <= 0)
			break;
		_putchar('\\');
	}
	_putchar('\n');
}
