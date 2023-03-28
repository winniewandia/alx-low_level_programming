#include <stdio.h>

/**
 * fibonacci - Prints first 98 fibonacci nos
 */

void fibonacci(void)
{
	long int a, b, c, sum;

	a = 0;
	b = 1;

	for (c = 0; c < 98, c++)
	{
		sum = a + b;
		printf
