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
	unsigned int i;

	if (new_size == old_size)
		return (ptr);
	if (ptr == NULL)
	{
		result = malloc(new_size);
		if (result == NULL)
		{
			return (NULL);
		}
	}
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	result = malloc(new_size);
	if (result == NULL)
		return (NULL);
	res = (int *)result;
	point = (int *)ptr;
	for (i = 0; i < new_size && i < old_size; i++)
	{
		res[i] = point[i];
	}
	free(ptr);
	return (result);
}
