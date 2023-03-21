#include "main.h"

/**
 * print_last_digit - Prints the last digit of a number
 * @i: number whose last digit is printed
 *
 * Return: the value of the last digit
 */

int print_last_digit(int i)
{
	int last;

	last = i % 10;
	if (last < 0)
	{
		_putchar(-last + '0');
		return (-last);
	}
	else
	{
		_putchar(last + '0');
		return (last);
	}
}
