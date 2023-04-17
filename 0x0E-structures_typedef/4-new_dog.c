#include "dog.h"
#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>

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
	char *n, *o;

	new = malloc(sizeof(dog_t));
	if (new == NULL)
		return (NULL);
	new->name = malloc(strlen(name) + 1);
	new->owner = malloc(strlen(owner) + 1);
	strcpy(new->n, name);
	strcpy(new->o, owner);
	new->age = age;
	return (new);
}

