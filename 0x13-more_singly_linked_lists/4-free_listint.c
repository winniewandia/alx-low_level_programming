#include "lists.h"

/**
 * free_listint - Frees a list
 * @head: Pointer to head of list to be freed
 */

void free_listint(listint_t *head)
{
	listint_t *current, *next;

	current = head;
	while (current != NULL)
	{
		next = current->next;
		free(current);
		current = next;
	}
}

