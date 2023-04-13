#include "main.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * array_range - Creates an array of integers
 * @min: least value of array
 * @max: Max value of array
 *
 * Return: Pointer to newly created array
 */

int *array_range(int min, int max)
{
	int *arr;
	int i, start_min;

	if (min > max)
		return (NULL);
	arr = malloc(sizeof(int) * (max - min + 1));
	if (arr == NULL)
		return (NULL);
	start_min = min;
	for (i = 0; i < (max - start_min + 1); i++)
	{
		if (min <= max)
		{
			arr[i] = min;
			min++;
		}
	}
	return (arr);
}

