#include "main.h"

/**
 * print_sign - prints the sign of a number
 * @n: the number to be checked the sign
 *
 * Return: 1 if +, 0 if 0, -1 if -
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('-');
		return (0);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
}
