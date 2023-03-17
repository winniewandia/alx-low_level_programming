#include <stdio.h>

/**
 * main - Entry point
 *
 * Prints combination of 2 numbers
 * Return: Always 0 (Success)
 */

int main(void)
{
	short int com;
	int first;
	int last;

	com = 01;
	first = 0;
	last = 0;
	while (com < 100)
	{
		if (com / 10 > 10)
		{
			putchar('0' + first);
		}
		last = com % 10;
		if (first != last)
		{
			if (first < last)
			{
				putchar('0' + com);
				putchar(',');
				putchar(' ');
			}
		}
		com++;
	}
	putchar ('\n');
	return (0);
}
