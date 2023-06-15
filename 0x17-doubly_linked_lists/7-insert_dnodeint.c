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
	dlistint_t *new, *current;
	unsigned int i;

	if (h == NULL)
		return (NULL);
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	if (idx == 0 || *h == NULL)
	{
		new = add_dnodeint(h, n);
	}
	else
	{
		current = *h;
		i = 1;
		if (current != NULL)
			while (current->prev != NULL)
				current = current->prev;
		while (current != NULL)
		{
			if (i == idx)
			{
				if (current->next == NULL)
				{
					new = add_dnodeint_end(h, n);
				}
				else
				{
					new->n = n;
					new->next = current->next;
					new->prev = current;
					current->next->prev = new;
					current->next = new;
				}
				break;
			}
			current = current->next;
			i++;
		}
	}
	return (new);
}
