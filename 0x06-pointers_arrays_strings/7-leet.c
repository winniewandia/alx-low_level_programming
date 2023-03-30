#include "main.h"

/**
 * leet - Encodes a strint into 1337
 * @str: String to be encoded
 *
 * Return: Encoded string
 */
 
char *leet(char *str)
{
	int i, j;

	char leetChars[5][2] = { {'a', '4'}, {'e', '3'}, {'o', '0'}, {'t', '7'}, {'l', '1'} };
	for (i = 0; str[i] != '\0'; i++)
	{
		char c = str[i];
		for (j = 0; j < 5; j++)
		{
			if (c == leetChars[j][0] || c == leetChars[j][0] - 'a' + 'A')
			{
				str[i] = leetChars[j][1];
				break;
			}
		}
	}
	return str;
}

