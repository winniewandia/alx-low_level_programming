#include "main.h"
#include <stdbool.h>

/**
 * jack_bauer - prints every minute of the day
 */

void jack_bauer(void)
{
	int a, b, c, d;
	bool stop;

	stop = false;
	a = 0;
	while (a < 3)
	{
		b = 0;
		while (b < 9)
		{
			c = 0;
			while (c < 6)
			{
				d = 0;
				while (d < 10)
				{
					if ((a == 2 && b == 3) && (c == 5 && d == 9))
						stop = true;
					_putchar(a + '0');
					_putchar(b + '0');
					_putchar(':');
					_putchar(c + '0');
					_putchar(d + '0');
					_putchar('\n');
					d++;
					if (stop)
						break;
				}
				c++;
				if (stop)
					break;
			}
			b++;
			if (stop)
				break;
		}
		a++;
		if (stop)
			break;
	}
}
