#include "lists.h"

/**
 * print_dlistint - prints all the elements of a dlistint_t list
 * @h: Head of the dlistint_t list
 *
 * Return: The number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
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