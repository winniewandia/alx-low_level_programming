#include "main.h"

/**
 * flip_bits - returns the number of bits you would need
 * to flip to get from one number to another
 * @n: The decimal number
 * @m: The other decimal number
 *
 * Return: The number of bits you would need to flip to
 * get from one number to another
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor_result = n ^ m;
	unsigned int count = 0;

	while (xor_result != 0)
	{
		count++;
		xor_result &= (xor_result - 1);
	}
	return (count);
}

