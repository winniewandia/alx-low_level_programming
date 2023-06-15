#include "lists.h"

/**
 * add_dnodeint - adds a new node at the beginning of a dlistint_t list
 * @head: Head to the list
 * @n: Value of the node to be added
 *
 * Return: The address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
    dlistint_t *temp;

    if (head == NULL)
        return (NULL);
    temp = malloc(sizeof(dlistint_t));
    if (temp == NULL)
        return (NULL);
    temp->n = n;
    temp->next = *head;
    temp->prev = NULL;
    *head = temp;
    return (temp);
}
