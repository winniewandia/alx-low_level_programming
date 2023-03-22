#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - prints all natural numbers from n to 98
 * @n: this is the number input
 */

void print_to_98(int n)
{
	while (n < 98)
	{
		printf("%d", n);
		if (n == 98)
			break;
		_putchar(',');
		_putchar(' ');
		n++;
	}
	while (n >= 98)
	{
		printf("%d", n);
		if (n == 98)
			break;
		_putchar(',');
		_putchar(' ');
		n--;
	}
	_putchar('\n');
}
