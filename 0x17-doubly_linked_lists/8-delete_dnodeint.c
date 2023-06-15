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

	previous = *head;
	n = 0;
	while (previous != NULL)
	{
		if (n == index)
		{
			if (n == 0)
			{
				*head = previous->next;
				if (*head != NULL)
					(*head)->prev = NULL;
			}
			else
			{
				current->next = previous->next;

				if (previous->next != NULL)
					previous->next->prev = current;
			}

			free(previous);
			return (1);
		}
		current = previous;
		previous = previous->next;
		n++;
	}

	return (-1);
}
