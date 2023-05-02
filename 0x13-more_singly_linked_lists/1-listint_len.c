#include "lists.h"

/**
 * listint_len - Returns the number of elements ina linked list
 * @h: Pointer to the head of list
 *
 * Return: Number of nodes
 */

size_t listint_len(const listint_t *h)
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

