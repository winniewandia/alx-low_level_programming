#include "dog.h"
#include <stddef.h>
#include <stdlib.h>
#include <string.h>

/**
 * init_dog - Initializes a variable of type struct dog
 * @d: Variable to be initialized
 * @name: Dog's name
 * @age: Dog's age
 * @owner: Dog's owner
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;
	d->name = malloc(strlen(name) + 1);
	strcpy(d->name, name);
	d->age = age;
	d->owner = malloc(strlen(owner) + 1);
	strcpy(d->owner, owner);
}

