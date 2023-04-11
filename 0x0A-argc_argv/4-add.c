#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - Print sum of positive numbers
 * @argc: Number of arguments
 * @argv: Array of the arguments
 *
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	int i, sum;

	sum = 0;
	for (i = 1; i < argc; i++)
	{
		if (atoi(argv[i]) > 0 && argc > 1)
		{
			sum += atoi(argv[i]);
		}
		else if (argc == 1)
		{
			printf("0\n");
		}
		else
		{
			printf("Error\n");
			return (1);
		}
	}
	printf("%d\n", sum);
	return (0);
}

