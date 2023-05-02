#include "lists.h"

/**
 * print_listint - Prints all elements of a list
 * @h: Pointer to the head of list
 *
 * Return: The number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t count;

	count = 0;
	while (h != NULL)
	{
		count += 1;
		printf("%d\n", h->n);
		h = h->next;
	}
	return (count);
}

