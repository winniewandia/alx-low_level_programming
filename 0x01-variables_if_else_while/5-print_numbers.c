#include <stdio.h>

/**
 * main - Entry point
 *
 * Prints single digits of base 10
 * Return: Always 0 (Success)
 */

int main(void)
{
	int digit;

	digit = 0;
	while (digit < 10)
	{
		printf("%d", digit);
		digit++;
	}
	putchar('\n');
	return (0);
}
