#include "lists.h"

/**
 * add_node - Adds a new node at the beginning of a list
 * @head: Pointer to the start of the list
 * @str: String to be added
 *
 * Return: Address of the new element
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *temp;
	unsigned int length;

	if (head == NULL || str == NULL)
		return (NULL);
	temp = malloc(sizeof(list_t));
	if (temp == NULL)
		return (NULL);
	temp->str = strdup(str);
	for (length = 0; str[length]; length++)
		;
	temp->len = length;
	temp->next = *head;
	*head = temp;
	return (*head);
}

