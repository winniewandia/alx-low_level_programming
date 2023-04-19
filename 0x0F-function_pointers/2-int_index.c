#include <stddef.h>
#include "function_pointers.h"

/**
 * int_index - Searches for an integer
 * @array: Array to be searched
 * @size: Number of elements in the array
 * @cmp: Apointer to the function to be used to compare values
 *
 * Return: Index of the first element for which cmp does not return false
 * and -1 if no element matches
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL)
		return (-1);
	if (size <= 0)
		return (-1);
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
		{
			return (i);
		}
	}
	return (-1);
}

