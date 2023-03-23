#include "main.h"

/**
 * print_long - prints long integers
 * @var: The long integer to be printed
 *
 */
void print_long(long var)
{
	if (var / 10)
		print_long(var / 10);
	_putchar((var % 10) + '0');
}
/**
 * more_numbers - Prints 10 times the nis from 0  14
 */

void more_numbers(void)
{
	int i, j;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 15; j++)
		{
			print_long(j);
		}
		_putchar('\n');
	}
}
