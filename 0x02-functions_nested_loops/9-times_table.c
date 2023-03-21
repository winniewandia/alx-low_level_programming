#include "main.h"

/**
 * times_table - prints the 9 times table, starting 0
 */

void times_table(void)
{
	int m, n, o;

	for (m = 0; m < 10; m++)
	{
		for (n = 0; n < 10; n++)
		{
			o = m * n;
			if (o > 9)
			{
				_putchar(o + '0');
				_putchar(',');
				_putchar(' ');
			}
			else
			{
				_putchar(o + '0');
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
