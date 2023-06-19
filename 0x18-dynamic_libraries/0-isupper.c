#include "main.h"

/**
 * _isupper - Used to check if a character is in upper case
 * @c: The character to be checked
 *
 * Return: 1 if c is in uppercase
 * and 0 otherwise
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
