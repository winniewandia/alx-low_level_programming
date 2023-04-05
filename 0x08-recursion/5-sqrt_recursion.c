#include "main.h"

/**
 * _sqr - Finds squareroot of number
 * @n: Number whose squareroot is needed
 * @low: Possible squareroot
 * @high: Possible squareroot
 *
 * Return: The squareroot
 */

int _sqr(int n, int low, int high)
{
	int mid, square;

	if (low > high)
		return (-1);
	mid = (low + high) / 2;
	square = mid * mid;
	if (square == n)
	{
		return (mid);
	}
	else if (square < n)
	{
		return (_sqr(n, mid + 1, high));
	}
	else
	{
		return (_sqr(n, low, mid - 1));
	}
}
/**
 * _sqrt_recursion - Returns the natural squarroot of a number
 * @n: Number to find the squareroot
 *
 * Return: Natural squareroot of number
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	return (_sqr(n, 0, n));
}
