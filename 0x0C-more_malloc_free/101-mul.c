#include "main.h"
#include <stdlib.h>
#include <stddef.h>
#include <ctype.h>
#include <stdarg.h>
#include <stdio.h>

/**
 * print_error - Prints error message
 */

void print_error(void)
{
	char s[] = "Error";
	int i;

	i = 0;
	while (s[i] != '\0')
	{
		_putchar(s[i]);
		i++;
	}
	_putchar('\n');
	exit(98);
}

/**
 * is_digit - checks if a value is a digit
 * @c: Integer to be checked
 *
 * Return: If success (1) and 0 otherwise
 */

int is_digit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

/**
 * is_integer - checks if a given string is an integer
 * @str: String to be checked
 *
 * Return: Always 1 if success otherwise 0
 */

int is_integer(char *str)
{
	int i;

	i = 0;
	if (str[i] == '+' || str[i] == '-')
	{
		i++;
	}
	for (i = 0; str[i] != '\0'; i++)
	{
		if (!is_digit(str[i]))
		{
			return (0);
		}
	}
	return (1);
}

/**
 * main - Multiplies 2 numbers
 * @argc: Number of arguments
 * @argv: Arguments of function
 *
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	int i;
	char comad[256];

	if (argc != 3)
	{
		print_error();
	}
	for (i = 1; i < 3; i++)
	{
		if (!is_integer(argv[i]))
		{
			print_error();
		}
	}
	sprintf(comad, "echo 'scale=10;%s*%s' | bc", argv[1], argv[2]);
	system(comad);
	return (0);
}

