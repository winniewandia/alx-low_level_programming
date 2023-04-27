#include "lists.h"

/**
 * free_list - Frees a list
 * @head: Pointer to the head of list
 *
 */

void free_list(list_t *head)
{
	list_t *next, *current;

	current = head;
	while (current != NULL)
	{
		next = current->next;
		free(current->str);
		free(current);
		current = next;
	}
}

