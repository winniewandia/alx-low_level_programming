#include "function_pointers.h"
#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1
 * On error, -1 is returned, and errno is set appropriately
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}

/**
 * print - Prints a pointer to a char
 * @n: Pointer to be printed
 */

void print(char *n)
{
	int i;

	for (i = 0; n[i] != '\0'; i++)
	{
		_putchar(n[i]);
	}
	_putchar('\0');
	_putchar('\n');
}

/**
 * print_name - prints a name
 * @name: Name to be printed
 * @f: Function pointer
 */

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL)
		return;
	f = print;
	f(name);
}

