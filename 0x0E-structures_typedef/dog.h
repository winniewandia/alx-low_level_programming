#ifndef DOG_H_INCLUDED
#define DOG_H_INCLUDED

/**
 * struct dog - Has name, age, owner of dog
 * @name: Dog name
 * @age: Age of dog
 * @owner: Dog's owner
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif

