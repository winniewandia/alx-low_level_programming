#include "lists.h"

/**
 * pop_listint - deletes the head node of a list
 * @head: Pointer to first node in list
 *
 * Return: The head nodes data and 0 if list is empty
 */

int pop_listint(listint_t **head)
{
	listint_t *temp;
	int data;

	if (head == NULL || *head == NULL)
		return (0);
	data = (*head)->n;
	temp = *head;
	*head = (*head)->next;
	free(temp);
	return (data);
}

