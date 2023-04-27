#include "lists.h"

/**
 * list_len - Returns number of elements in a linked list
 * @h: The liked list
 *
 * Return: No of elements in h
 */

size_t list_len(const list_t *h)
{
	size_t n = 0;

	while (h != NULL)
	{
		n++;
		h = h->next;
	}
	return (n);
}

