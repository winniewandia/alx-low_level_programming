#include "main.h"

/**
 * _islower - checks for a lowercase character
 * @c: the character to check
 *
 * Return: On Success 1
 * otherwise 0
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}