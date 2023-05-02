#include "lists.h"

/**
 * add_node_end - Adds a node at the end of a list
 * @head: Pointer to the start of the list
 * @str: String to be added
 *
 * Return: Address of new element
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *last, *new;
	unsigned int length;

	if (str == NULL || head == NULL)
		return (NULL);
	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	new->str = strdup(str);
	for (length = 0; str[length]; length++)
		;
	new->len = length;
	new->next = NULL;
	if (*head == NULL)
	{
		*head = new;
	}
	else
	{
		last = *head;
		while (last->next != NULL)
		{
			last = last->next;
		}
		last->next = new;
	}
	return (new);
}

