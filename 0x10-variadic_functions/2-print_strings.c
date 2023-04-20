#include "variadic_functions.h"

/**
 * print_strings - Prints strings
 * @separator: String to be used between printed strings
 * @n: Number of strings to be printed
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list ap;
	char *str;

	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		str = va_arg(ap, char *);
		if (str == NULL)
		{
			printf("(nil)");
		}
		if (separator != NULL)
		{
			if (i != (n - 1))
			{
				printf("%s%s", str, separator);
			}
			else if (i == (n - 1))
			{
				printf("%s", str);
			}
		}
		else if (separator == NULL)
		{
			printf("%s", str);
		}
	}
	printf("\n");
}

