#include "lists.h"

/**
 * sum_dlistint - returns the sum of all the data (n) of a dlistint_t linked list
 * @head: Pointer to the list
 *
 * Return: Sum of all the data
 */
int sum_dlistint(dlistint_t *head)
{
	int sum;
	dlistint_t *nodes;

	if (head == NULL)
		return (NULL);
	sum = 0;
	nodes = head;
	while (nodes != NULL)
	{
		sum += nodes->n;
		nodes = nodes->next;
	}
	return (sum);
}
