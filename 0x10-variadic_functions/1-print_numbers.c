#include "variadic_functions.h"

/**
 * print_numbers - Prints numbers followed by a new line
 * @separator: Symbol to be used between printed numbers
 * @n: Number of integers to be printed
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list ap;

	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		if (separator != NULL)
		{
			if (i != (n - 1))
			{
				printf("%d%s", va_arg(ap, int), separator);
			}
			else if (i == (n - 1))
			{
				printf("%d", va_arg(ap, int));
			}
		}
		else if (separator == NULL)
		{
			printf("%d", va_arg(ap, int));
		}
	}
	printf("\n");
}

