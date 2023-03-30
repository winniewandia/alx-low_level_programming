#include "main.h"

/**
 * string_toupper - Converts lowercase letters to upper
 * @param: Letter to be converted to Uppercase
 *
 * Return: Converted string
 */

char *string_toupper(char *param)
{
	int i;

	i = 0;
	while (param[i] != '\0')
	{
		if (param[i] >= 'a' && param[i] <= 'z')
		{
			param[i] -= 32;
		}
		i++;
	}
	return (param);
}

