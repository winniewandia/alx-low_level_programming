#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - Print sum of positive numbers
 * @argc: Number of arguments
 * @argv: Array of the arguments
 *
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	int i, sum, j;

	sum = 0;
	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	for (i = 1; i < argc; i++)
	{
		char *arg = argv[i];
		j = 0;
		while (arg[j] != '\0')
		{
			if (!isdigit(arg[j]))
			{
				printf("Error\n");
				return (1);
			}
			j++;
		}
		sum += atoi(arg);
	}
	printf("%d\n", sum);
	return (0);
}

