#include "lists.h"

/**
 * add_node - Adds a new node at the beggining of a list
 * @head: Pointer to first node of the list
 * @str: String to be added
 *
 * Return: Address of the new element
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *temp;
	int length;

	if (str == NULL)
		return (NULL);
	if (head == NULL)
		return (NULL);
	temp = malloc(sizeof(list_t));
	if (temp == NULL)
	{
		return (NULL);
	}
	temp->str = strdup(str);
	for (length = 0; str[length]; length++)
		;
	temp->len = length;
	temp->next = *head;
	*head = temp;
	return (*head);
	free(temp);
}

