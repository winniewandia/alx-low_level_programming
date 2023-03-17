#include <stdio.h>

/**
 * main - Entry point
 *
 * Prints hexadecimals
 * Return: Always 0 (Success)
 */

int main(void)
{
	char a;
	int hexa;

	a = 'a';
	hexa = 0;
	while (hexa < 10)
	{
		putchar('0' + hexa);
		hexa++;
	}
	while (a <= 'f')
	{
		putchar(a);
		a++;
	}
	putchar('\n');
	return (0);
}
