#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 * @h: Pointer to the list
 * @idx: Index to add the node
 * @n: Data for the node
 *
 * Return: the address of the new node, or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new, *prev, *current;
	unsigned int i;

	if (h == NULL)
		return (NULL);
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	if (idx == 0 || *h == NULL)
	{
		add_dnodeint(h, n);
	}
	current = *h;
	i = 1;
	while (i < idx && current != NULL)
	{
		prev = current;
		current = current->next;
		i++;
	}
	if (i < idx)
	{
		free(new);
		return (NULL);
	}
	prev->next = new;
	new->next = current;
	new->prev = prev;
	return (new);
}
