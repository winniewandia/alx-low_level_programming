#include "main.h"

/**
 * _atoi - Convert a string to an integer
 * @s: The string to be converted
 *
 * Return: The converted string
 */

int _atoi(char *s)
{
	int sign, i, result, numSum;

	sign = 1;
	result = 0;
	i = 0;
	numSum = 0;
	while (*s == ' ')
	{
		s++;
	}
	while (*s == '-' || *s == '+')
	{
		if (*s == '-')
		{
			sign *= -1;
		}
		s++;
		numSum++;
	}
	while (*s != '\0')
	{
		if (*s >= '0' && *s <= '9')
		{
			result = result * 10 - (*s - '0');
			i = 1;
			s++;
		}
		else if (i)
		{
			break;
		}
		else
		{
			s++;
		}
	}
	return (sign * result);
}

