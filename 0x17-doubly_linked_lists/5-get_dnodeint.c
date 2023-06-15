#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node of a dlistint_t linked list
 * @head: Pointer to the list
 * @index: index of the node
 *
 * Return: N'th node of a list
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int n;
	dlistint_t *nthnode;

	if (head == NULL)
		return (NULL);
	n = 0;
	nthnode = head;
	while (n < index && nthnode != NULL)
	{
		nthnode = nthnode->next;
		n++;
	}
	if (n == index)
	{
		return (nthnode);
	}
	else
	{
		return (NULL);
	}
}
