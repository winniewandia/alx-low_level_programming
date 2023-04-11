#include "main.h"
#include <stdio.h>

/**
 * main - Prints number of arguments
 * @argc: Number of arguments
 * @argv: Array of the arguments
 *
 * Return: Always 0
 */

int main(int argc, char __attribute__ ((unused)) *argv[])
{
	printf("%d\n", argc - 1);
	return (0);
}

