#include "main.h"

/**
 * times_table - prints the 9 times table, starting 0
 */

void times_table(void)
{
	int m, n, o;

	for (m = 0; m < 10; m++)
	{
		_putchar('0');
		_putchar(',');
		_putchar(' ');
		for (n = 1; n < 10; n++)
		{
			o = m * n;
			if ((o / 10) > 0)
			{
				_putchar((o / 10) + '0');
			}
			else
			{
				_putchar(' ');
			}
			_putchar((o % 10) + '0');
			if (n < 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
