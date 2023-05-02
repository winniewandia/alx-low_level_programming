#include "lists.h"

/**
 * insert_nodeint_at_index - Inserts a new node at a given position
 * @head: Pointer to head node of a list
 * @idx: Index where the new node should be added
 * @n: Int to be added
 *
 * Return: Address of the new node
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new, *orig;
	unsigned int i;

	if (head == NULL || *head == NULL)
		return (NULL);
	i = 0;
	orig = *head;
	while (i < idx && orig != NULL)
	{
		orig = orig->next;
		i++;
	}
	if (i == idx)
	{
		new = malloc(sizeof(listint_t));
		if (new == NULL)
			return (NULL);
		new->n = n;
		new->next = orig;
		orig = orig->next;
		return (new);
	}
	else
	{
		return (NULL);
	}
}

