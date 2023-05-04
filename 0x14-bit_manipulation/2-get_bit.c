#include "main.h"

/**
 * get_bit - returns value of bit at given index
 * @n: The number whose bit is gotten
 * @index: The index, starting from 0 of the bit you want to get
 *
 * Return: value of the bit at index index or -1 if an error
 * occured
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int mask;

	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}
	mask = 1UL << index;
	return ((n & mask) ? 1 : 0);
}

