#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sum of the two diagonals of a square
 * matrix of integers
 * @a: Pointer to the square matrix
 * @size: It's size
 */

void print_diagsums(int *a, int size)
{
	int i, sum1, sum2;
	int *ptr1, *ptr2;

	sum1 = 0;
	sum2 = 0;
	ptr1 = a;
	ptr2 = a + size - 1;
	for (i = 0; i < size; i++)
	{
		sum1 += *ptr1;
		sum2 += *ptr2;
		ptr1 += size + 1;
		ptr2 += size - 1;
	}
	printf("%d, %d\n", sum1, sum2);
}

