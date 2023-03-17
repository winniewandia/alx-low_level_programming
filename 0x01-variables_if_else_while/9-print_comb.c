#include <stdio.h>

/**
 * main - Entry point
 *
 * Prints all possible combinations of single digits
 * Return: Always 0 (Success)
 */

int main(void)
{
	int pos;

	pos = 0;
	while (pos <= 9)
	{
		putchar('0' + pos);
		if (pos < 9)
		{
			putchar(',');
			putchar(' ');
		}
		pos++;
	}
	putchar('\n');
	return (0);
}
