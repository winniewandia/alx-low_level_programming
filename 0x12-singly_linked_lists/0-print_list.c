#include "lists.h"

/**
 * print_list - Prints all elements in a list
 * @h: Pointer to the head of the list
 *
 * Return: The number of nodes
 */

size_t print_list(const list_t *h)
{
	size_t count;

	count = 0;
	while (h != NULL)
	{
		if (h->str == NULL)
		{
			count += 1;
			printf("[%u] (nil)\n", 0);
		}
		else
		{
			count += 1;
			printf("[%u] (%s)\n", h->len, h->str);
		}
		h = h->next;
	}
	return (count);
}

