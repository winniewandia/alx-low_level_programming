#include "main.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * malloc_checked - Allocates memory using malloc
 * @b: Integer to be allocated the memory
 *
 * Return: Pointer of type void
 */

void *malloc_checked(unsigned int b)
{
	void *a;

	a = malloc(b);
	if (a == NULL)
		exit(98);
	return (a);
}
