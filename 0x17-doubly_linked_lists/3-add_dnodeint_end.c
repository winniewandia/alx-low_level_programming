#include "lists.h"

/**
 * add_dnodeint_end - adds a new node at the end of a dlistint_t list
 * @head: Pointer to the list
 * @n: Value of the new node to be added
 *
 * Return: The address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
    dlistint_t *new, *last;

    if (head == NULL)
        return (NULL);
    new = malloc(sizeof(dlistint_t));
    if (new == NULL)
        return (NULL);
    new->n = n;
    new->next = NULL;
    if (*head == NULL)
    {
        new->prev = NULL;
        *head = new;
    }
    else
    {
        last = *head;
        while (last->next != NULL)
        {
            last = last->next;
        }
        new->prev = last;
        last->next = new;
    }
    return (new);
}
