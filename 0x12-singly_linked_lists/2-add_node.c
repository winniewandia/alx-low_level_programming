#include "lists.h"

/**
 * _strlen - gives the length of a string
 * @s: Input string
 *
 *  Return: Length of the string
 */

int _strlen(char *s)
{
	int len;

	len = 0;
	while (*s != '\0')
	{
		len++;
		s++;
	}
	return (len);
}

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

	length = _strlen((char *) str);
	if (str == NULL)
		return (NULL);
	temp = malloc(sizeof(list_t));
	if (temp == NULL)
	{
		return (NULL);
	}
	temp->str = strdup(str);
	if (temp->str == NULL)
	{
		free(temp);
		return (NULL);
	}
	temp->len = length;
	temp->next = *head;
	*head = temp;
	return (temp);
}

