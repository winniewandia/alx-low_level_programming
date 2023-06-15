#include "lists.h"

/**
 * sum_dlistint - returns the sum of all the data (n) of a
 * dlistint_t linked list
 * @head: Pointer to the list
 *
 * Return: Sum of all the data
 */
int sum_dlistint(dlistint_t *head)
{
	int sum;
	dlistint_t *ndes;

	if (head == NULL)
		return (0);
	sum = 0;
	ndes = head;
	while (ndes != NULL)
	{
		sum += ndes->n;
		ndes = ndes->next;
	}
	return (sum);
}
