#include "main.h"

/**
 * _pow_recursion - returns value of x to power y
 * @x: Number to be raised to power y
 * @y: Number to raise x
 *
 * Return: raised number
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
	{
		return (1);
	}
	if (y == 1)
		return (x);
	return (x * _pow_recursion(x, y - 1));
}

