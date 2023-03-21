#include <unistd.h>

/**
 * _putchar - Used to write a character on stdout
 * @c: the character to be printed
 *
 * Return: On success 1
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
