#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the opcodes of its own main function
 * @argc: Number of arguments
 * @argv: Array of arguments
 *
 * Return: Always 0 (success)
 */

int main(int argc, char *argv[])
{
	unsigned char *p;
	int num_bytes, i;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	num_bytes = atoi(argv[1]);
	if (num_bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}
	p = (unsigned char *)main;
	for (i = 0; i < num_bytes; i++)
	{
		printf("%02x", *(p + i));
	}
	printf("\n");
	return (0);
}

