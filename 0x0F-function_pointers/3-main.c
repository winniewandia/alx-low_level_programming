#include "3-calc.h"

/**
 * main - Prints result of the operation and new line
 *@argc: Number of arguments
 *@argv: Array of the arguments
 *
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
	int num1, num2, result;
	int (*op_fun)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	op_fun = get_op_func(argv[2]);
	if (op_fun == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	if ((*argv[2] == '/' || *argv[2] == '%') && (num2 == 0))
	{
		printf("Error\n");
		exit(100);
	}
	result = op_fun(num1, num2);
	printf("%d\n", result);
	return (0);
}

