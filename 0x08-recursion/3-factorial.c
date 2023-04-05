#include "main.h"

/**
 * factorial - Returns factorial of a number
 * @n: Number to calculate the factorial
 *
 * Return: factorial of the number
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}

