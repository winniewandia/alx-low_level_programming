#include "main.h"
#include <string.h>

/**
 * times_table - prints the 9 times table, starting 0
 */

void times_table(void)
{
	int row, column, value;

	row = 0;
	while (row <= 9)
	{
		column = 0;
		while (column <10)
		{
			value = row * column;
			if (value > 10)
			{
				_putchar((value / 10) + '0');
				_putchar((value % 10) + '0');
				if (column == 9)
					break;
				_putchar(',');
				_putchar(' ');
			}
			else
			{
				_putchar(value + '0');
				if (column == 9)
					break;
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
			}
			column++;
		}
		_putchar('\n');
		row++;
	}
}
