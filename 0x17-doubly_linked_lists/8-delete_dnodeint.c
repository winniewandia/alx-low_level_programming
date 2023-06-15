#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes the node at index index of a
 * dlistint_t linked list
 * @head: Pointer to the list
 * @index: Index of the node to be deleted
 *
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int n;
	dlistint_t *current, *previous;

	if (*head == NULL || head == NULL)
		return (-1);
	if (index == 0)
	{
		current = *head;
		*head = (*head)->next;
		(*head)->prev = NULL;
		free(current);
		return (1);
	}
	previous = *head;
	if (previous != NULL)
		while (previous->prev != NULL)
			previous = previous->prev;
	current = previous->next;
	n = 1;
	while (n < index && current != NULL)
	{
		previous = current;
		current = current->next;
		n++;
	}
	if (current == NULL)
		return (-1);
	previous->next = current->next;
	previous->next->prev = current->prev;
	free(current);
	return (1);
}
