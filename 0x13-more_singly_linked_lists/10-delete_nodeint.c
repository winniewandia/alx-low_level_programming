#include "lists.h"

/**
 * delete_nodeint_at_index - deletes node at index
 * @head: Pointer to head node
 * @index: Index for the node to be deleted
 *
 * Return: Always 1 (Success) and -1 otherwise
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int n;
	listint_t *current, *previous;

	n = 0;
	if (index == 0)
	{
		current = *head;
		*head = (*head)->next;
		free(current);
		return (1);
	}
	if (head == NULL || *head == NULL)
		return (-1);
	current  = *head;
	while (n < index || current != NULL)
	{
		previous = current;
		current = current->next;
		n++;
	}
	if (current == NULL)
		return (-1);
	previous->next = current->next;
	free(current);
	return (1);
}

