#include "lists.h"

/**
 * list_len - Returns number of elements in a list
 * @h: Pointer to the list
 *
 * Return: Number of elements in a list
 */

size_t list_len(const list_t *h)
{
	size_t count;

	count = 0;
	while (h != NULL)
	{
		count += 1;
		h = h->next;
	}
	return (count);
}

