#include "lists.h"

/**
 * dlistint_len - returns the number of elements in a linked dlistint_t list
 * @h: Head of the list
 *
 * Return: The number of elements in the list
 */
size_t dlistint_len(const dlistint_t *h)
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
