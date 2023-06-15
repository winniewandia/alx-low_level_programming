#include "lists.h"

/**
 * add_dnodeint - adds a new node at the beginning of a dlistint_t list
 * @head: Head to the list
 * @n: Value of the node to be added
 *
 * Return: The address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *temp, *current;

	temp = malloc(sizeof(dlistint_t));
	if (temp == NULL)
		return (NULL);
	temp->n = n;
	temp->prev = NULL;
	current = *head;
	if (current != NULL)
	{
		while (current->prev != NULL)
			current = current->prev;
	}
	temp->next = current;
	if (current != NULL)
		current->prev = temp;
	*head = temp;
	return (temp);
}
