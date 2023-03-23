#include "main.h"

/**
 * print_triangle - prints a triangle
 * @size: Gives the size of triangle
 */

void print_triangle(int size)
{
	int i, j;

	if (size <= 0)
		_putchar('\n');
	for (i = 1; i <= size; i++)
	{
		for (j = size; j >= 1; j--)
		{
			if (i == j || i > j)
			{
				_putchar('#');
			}
			else if (i < j)
			{
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
