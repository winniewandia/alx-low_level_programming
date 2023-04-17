#ifndef DOG_H_INCLUDED
#define DOG_H_INCLUDED

/**
 * struct dog - Has name, age, owner of dog
 * @name: Dog name
 * @age: Age of dog
 * @owner: Dog's owner
 */

typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
int _strlen(char *s);
char *_strcpy(char *dest, char *src);
void free_dog(dog_t *d);

#endif

