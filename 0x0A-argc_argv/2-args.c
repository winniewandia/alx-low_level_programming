#include "main.h"
#include <stdio.h>

/**
 * main - Prints all arguments
 * @argc: Number of arguments
 * @argv: Array of all arguments
 *
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}

