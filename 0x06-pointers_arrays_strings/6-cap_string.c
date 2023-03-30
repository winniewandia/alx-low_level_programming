#include "main.h"
#include <ctype.h>
#include <string.h>

/**
 * is_alpha - Check if character is a letter
 * @c: Character to be checked
 *
 * Return: Returned character
 */

int is_alpha(char c)
{
	return (((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')) &&
		(c == ' ' || c == '\t' || c == '\n' ||
		 c == ',' || c == ';' || c == '.' ||
		 c == '!' || c == '?' || c == '\"' ||
		 c == '(' || c == ')' || c == '{' ||
		 c == '}' || !((c >= '0' && c <= '9'))));
}

/**
 * cap_string - Capitalizes each letter ar the begining of a word
 * @str: String to be capitalized
 *
 * Return: Capitalized string
 */

char *cap_string(char *str)
{
	int i, new_word;

	i = 0;
	new_word = 1;
	while (str[i] != '\0')
	{
		if (new_word && is_alpha(str[i]))
		{
			if (str[i] >= 'a' && str[i] <= 'z')
			{
				str[i] -= ('a' - 'A');
			}
			new_word = 0;
		}
		else if (str[i] == ' ' || str[i] == '\t' || str[i] == '\n' ||
				str[i] == ',' || str[i] == ';' || str[i] == '.' ||
				str[i] == '!' || str[i] == '?' || str[i] == '\"' ||
				str[i] == '(' || str[i] == ')' || str[i] == '{' ||
				str[i] == '}')
		{
			new_word = 1;
		}
		else
		{
			new_word = 0;
		}
		i++;
	}
	return (str);
}

