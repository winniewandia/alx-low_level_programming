#include <stdio.h>

/**
 * main - Entry point
 *
 * Prints single digits using putchar
 * Return: Always 0 (Success)
 */

int main(void)
{
	int digit;

	digit = 0;
	while (digit < 10)
	{
		putchar('0' + digit);
		digit++;
	}
	putchar('\n');
	return (0);
}
