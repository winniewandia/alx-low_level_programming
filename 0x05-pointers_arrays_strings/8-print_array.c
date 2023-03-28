#include "main.h"
#include "stdio.h"

/**
 * print_array - prints n elements of array
 * @a: Array to be printed
 * @n: Number of items to be printed
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d, ", a[i]);
	}
	_putchar('\n');
}
