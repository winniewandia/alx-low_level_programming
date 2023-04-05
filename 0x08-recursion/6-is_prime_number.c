#include "main.h"

/**
 * _is_prime_helper - Checks if n is prime
 * @n: Number to be checked
 * @d: A divisor
 *
 * Return: Always 1 if success
 */

int _is_prime_helper(int n, int d)
{
	if (n < 2)
		return (0);
	if (d == 1)
		return (1);
	if (n % d == 0)
	{
		return (0);
	}
	return (_is_prime_helper(n, d - 1));
}

/**
 * _is_prime_number - Checks if number is prime
 * @n: Number to be checked
 *
 * Return: Always 1 if success
 */

int is_prime_number(int n)
{
	return (_is_prime_helper(n, n - 1));
}

