#include "main.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * _calloc - Allocates memory for an array
 * @nmemb: Number of elements
 * @size: Size bytes each
 *
 * Return: Pointer of type void
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *arr;
	unsigned int i;
	char *p;

	if (nmemb == 0 || size == 0)
		return (NULL);
	arr = malloc(nmemb * size);
	if (arr == NULL)
		return (NULL);
	p = (char *)arr;
	for (i = 0; i < nmemb * size; i++)
	{
		p[i] = 0;
	}
	return (arr);
}

