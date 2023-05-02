#include "lists.h"

/**
 * sum_listint - returns sum of all the data(n) of a list
 * @head: Pointer to head node of a list
 *
 * Return: Sum of all constants n in the list
 */

int sum_listint(listint_t *head)
{
	int sum;
	listint_t *nthnode;

	if (head == NULL)
		return (0);
	nthnode = head;
	sum = 0;
	while (nthnode != NULL)
	{
		sum += nthnode->n;
		nthnode = nthnode->next;
	}
	return (sum);
}

