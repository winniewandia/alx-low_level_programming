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
	listint_t *new, *previous, *current;
	unsigned int i;

	if (head == NULL || *head == NULL)
		return (NULL);
	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;

	if (idx == 0 || *head == NULL)
	{
		new->next = *head;
		*head = new;
		return (new);
	}
	current = *head;
	i = 0;
	while (i < idx && current != NULL)
	{
		previous = current;
		current = current->next;
		i++;
	}
	if (i < idx)
	{
		free(new);
		return (NULL);
	}
	previous->next = new;
	new->next = current;
	return (new);
}

