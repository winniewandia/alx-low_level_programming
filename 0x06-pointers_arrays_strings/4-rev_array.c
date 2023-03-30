#include "main.h"

/**
 * reverse_array - Reverses elements of an array
 * @a: Array to be reversed
 * @n : No of integers in an array
 */

void reverse_array(int *a, int n)
{
	int i, j, temp;

	for (i = 0, j = n - 1; i < j; i++, j--)
	{
		temp = a[i];
		a[i] = a[j];
		a[j] = temp;
	}
}

