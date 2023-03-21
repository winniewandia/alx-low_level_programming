#include "main.h"

/**
 * _isalpha - checks if int is a letter
 * @c: the int to be checked
 *
 * Return: 1 if Success
 * 0 otherwise
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

