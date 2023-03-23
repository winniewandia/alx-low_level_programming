#include "main.h"

/**
 * print_diagonal - Draws diagonal line on terminal
 * @n: Number of times the line is printed
 */

void print_diagonal(int n)
{
	int i, j;

	if (n <= 0)
		_putchar('\n');
	for (i = 1; i <= n; i++)
	{
		for (j = 1; j <= n; j++)
		{
			if (i == j)
			{
				_putchar('\\');
			}
			else
			{
				_putchar(' ');
			}
		}
		 _putchar('\n');
	}
}
