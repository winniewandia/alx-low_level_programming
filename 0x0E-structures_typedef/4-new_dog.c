#include "dog.h"
#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>
#include <string.h>

/**
 * _strcpy - copies the string pointed to by src
 * to the character array pointed to by dest
 * @dest: Destination character array
 * @src: Contents to be copied
 *
 * Return: The pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

/**
 * _strlen - gives the length of a string
 * @s: Input string
 *
 * Return: Length of the string
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
 * new_dog - Creates a new dog
 * @name: Dog's name
 * @age: Dog's age
 * @owner: Dog's owner
 *
 * Return: Apointer of type dog_t
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new;

	new = malloc(sizeof(dog_t));
	if (new == NULL)
		return (NULL);
	new->name = malloc(_strlen(name) + 1);
	if (new->name == NULL)
	{
		free(new);
		return (NULL);
	}
	new->owner = malloc(_strlen(owner) + 1);
	if (new->owner == NULL)
	{
		free(new);
		free(new->name);
		return (NULL);
	}
	new->age = age;
	_strcpy(new->name, name);
	_strcpy(new->owner, owner);
	return (new);
}

