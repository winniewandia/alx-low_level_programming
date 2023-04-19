#include "3-calc.h"

/**
 * op_add - Adds 2 integers
 * @a: First integer
 * @b: Second integer
 *
 * Return: The sum of a and b
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - Subtracts 2 int
 * @a: First integer
 * @b: Second integer
 *
 * Return: diference of a and b
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - Multiplies 2 int
 * @a: First integer
 * @b: Second integer
 *
 * Return: Product of 2 int
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - Divides 2 int
 * @a: First integer
 * @b: Second integer
 *
 * Return: Result of dividing a by b
 */

int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - Performs modulus of a by b
 * @a: First integer
 * @b: Second integer
 *
 * Return: The remainder of division of a by b
 */

int op_mod(int a, int b)
{
	return (a % b);
}

