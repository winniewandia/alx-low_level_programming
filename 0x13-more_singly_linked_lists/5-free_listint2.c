#include "lists.h"

/**
 * free_listint2 - frees a list and sets head to NULL
 * @head: Pointer to first element of list
 */

void free_listint2(listint_t **head)
{
	listint_t *current, *next;

	current = *head;
	while (current != NULL)
	{
		next = current->next;
		free(current);
		current = next;
	}
	*head = NULL;
}

