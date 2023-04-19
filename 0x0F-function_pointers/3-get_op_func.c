#include "3-calc.h"

/**
 * get_op_func - Selcts function selected by user
 * @s: Operator passed as argument
 *
 * Return: returns a pointer to the function that
 * corresponds to the operator given as a parameter
 */

int (*get_op_func(char *s))(int, int)
{
	int i;
	op_t ops[] = {{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}};

	i = 0;
	while (ops[i].op != NULL)
	{
		if (*(ops[i].op) == *s)
			return (ops[i].f);
		i++;
	}
	return (NULL);
}

