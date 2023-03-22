#include "main.h"

/**
 * print_long - prints long integers
 * @var: The long integer to be printed
 *
 */

void print_long(long var)
{
	if (var / 10)
		print_long(var / 10);
	putchar((var % 10) + '0');
}
/**
 * print_times_table - prints n times table starting with zero
 * @n: input character
 */
void print_times_table(int n)
{
	int row, column, value;

	if (n > 15 || n < 0)
		return;
	row = 0;
	while (row <= n)
	{
		_putchar('0');
		_putchar(',');
		_putchar(' ');
		column = 1;
		while (column <= n)
		{
			value = row * column;
			if (value > 9)
			{
				if (value > 9 && value < 100)
				{
					_putchar(' ');
					print_long(value);
					if (column == n)
						break;
					_putchar(',');
					_putchar(' ');
				}
				else
				{
					print_long(value);
					if (column == n)
						break;
					_putchar(',');
					_putchar(' ');
				}
			}
			else
			{
				_putchar(' ');
				_putchar(' ');
				_putchar(value + '0');
				if (column == n)
					break;
				_putchar(',');
				_putchar(' ');
			}
			column++;
		}
		putchar('\n');
		row++;
	}
}
