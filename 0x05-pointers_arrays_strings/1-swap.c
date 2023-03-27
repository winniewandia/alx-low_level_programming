#include "main.h"

/**
 * swap_int - Swaps the values of 2 int
 * @a: value to be swapped
 * @b: 2nd value to be swapped
 *
 */

void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

