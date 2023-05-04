#include "main.h"

/**
 * _powerl - returns the power of a base number
 * @base: The base number
 * @pow: The number the base is raised to
 *
 * Return: Base raised to power
 */

unsigned long int _powerl(unsigned long int base, unsigned long int pow)
{
	unsigned long int result, i;

	result = 1;
	for (i = 0; i < pow; i++)
	{
		result *= base;
	}
	return (result);
}

/**
 * print_binary - converts decimal to binary
 * @n: Decimal to be converted
 */

void print_binary(unsigned long int n)
{
	unsigned int i, max, diff, j, result, k;

	if (n == 0)
	{
		_putchar('0');
	}
	else
	{
		for (max = 0; _powerl(2, max) <= n; max++)
			;
		i = max - 1;
		if (_powerl(2, i) == n)
		{
			_putchar('1');
			for (k = 0; k < max - 1; k++)
			{
				_putchar('0');
			}
		}
		else
		{
			result = n;
			for (j = i; j <= i; j--)
			{
				diff = result;
				if (diff >= _powerl(2, j))
				{
					diff -= _powerl(2, j);
					_putchar('1');
				}
				else
				{
					_putchar('0');
				}
				result = diff;
			}
		}
	}
}

