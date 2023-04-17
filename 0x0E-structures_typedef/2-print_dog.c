#include "dog.h"
#include <stdio.h>
#include <stddef.h>

/**
 * print_dog - Prints a struct dog
 * @d: Struct to be printed
 */

void print_dog(struct dog *d)
{i
	if (d == NULL)
	{
		return;
	}
	else if (d->name == NULL)
	{
		printf("Name: (nil)\n");
		printf("Age: %f\n", d->age);
		printf("Owner: %s\n", d->owner);
	}
	else if (d->age == 0.000000)
	{
		printf("Name: %s\n", d->name);
		printf("Age: (nil)\n");
		printf("Owner: %s\n", d->owner);
	}
	else if (d->owner == NULL)
	{
		printf("Name: %s\n", d->name);
		printf("Age: %f\n", d->age);
		printf("Owner: (nil)\n");
	}
	else
	{
		printf("Name: %s\n", d->name);
		printf("Age: %6f\n", d->age);
		printf("Owner: %s\n", d->owner);
	}
}

