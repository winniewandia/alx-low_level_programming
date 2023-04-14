#include "main.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * _realloc - Hardcoded realloc
 * @ptr: Pointer to previously allocated memory with malloc
 * @old_size: size in bytes for the previous allocated memory
 * @new_size: size in bytes of new memory block
 *
 * Return: New size allocated memory block
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *result;
	int *res, *point;
	unsigned int i, get_min;

	if (new_size == old_size)
		return (ptr);
	if (ptr == NULL)
	{
		result = malloc(new_size);
	}
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	result = malloc(new_size);
	if (result == NULL)
		return (NULL);
	if (old_size > new_size)
	{
		get_min = new_size;
	}
	else if (new_size > old_size)
	{
		get_min = old_size;
	}
	res = (int *)result;
	point = (int *)ptr;
	for (i = 0; i < get_min; i++)
	{
		res[i] = point[i];
	}
	return (result);
}
