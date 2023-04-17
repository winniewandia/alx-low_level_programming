#include "dog.h"
#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>
#include <string.h>

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
		return (NULL);
	new->owner = malloc(_strlen(owner) + 1);
	if (new->owner == NULL)
		return (NULL);
	new->age = age;
	_strcpy(new->name, name);
	_strcpy(new->owner, owner);
	return (new);
}

