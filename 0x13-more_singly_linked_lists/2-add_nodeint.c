#include "lists.h"

/**
 * add_nodeint - Adds a new node at the beginning of a list
 * @head: Pointer to the head of list
 * @n : Constant integer to be added
 *
 * Return: Address of new element
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *temp;

	if (head == NULL)
		return (NULL);
	temp = malloc(sizeof(listint_t));
	if (temp == NULL)
		return (NULL);
	temp->n = n;
	temp->next = *head;
	*head = temp;
	return (temp);
}

