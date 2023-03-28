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
		if (a[i] != '\0')
		{
			printf("%d, ", a[i]);
		}
		else
		{
			return;
		}
	}
	_putchar('\n');
}
