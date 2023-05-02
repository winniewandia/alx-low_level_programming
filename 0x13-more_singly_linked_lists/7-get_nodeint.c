#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a list
 * @head: Pointer to the head node
 * @index: Index of the node
 *
 * Return: The nth node of a linked list
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int n;
	listint_t *nthnode;

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

