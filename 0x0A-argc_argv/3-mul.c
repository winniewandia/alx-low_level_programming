#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - Multiplies 2 integers
 * @argc: Number of arguments
 * @argv: Array of the arguments
 *
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	int mult;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	mult = atoi(argv[1]) * atoi(argv[2]);
	printf("%d\n", mult);
	return (0);
}

