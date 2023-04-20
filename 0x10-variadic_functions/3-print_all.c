#include "variadic_functions.h"

/**
 * print_all - Prints anything
 * @format: List of types of arguments passed to the function
 */

void print_all(const char * const format, ...)
{
	va_list args;
	int i = 0, j, k = 0;
	char *s;
	const char ar[] = "cifs";

	va_start(args, format);
	while (format && format[i])
	{
		j = 0;
		while (ar[j])
		{
			if (format[i] == ar[j] && k)
			{
				printf(", ");
				break;
			} j++;
		}
		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(args, int)), k = 1;
				break;
			case 'i':
				printf("%d", va_arg(args, int)), k = 1;
				break;
			case 'f':
				printf("%f", va_arg(args, double)), k = 1;
				break;
			case 's':
				s = va_arg(args, char *), k = 1;
				if (!s)
				{
					printf("(nil)");
					break;
				}
				printf("%s", s);
				break;
		} i++;
	}
	printf("\n"), va_end(args);
}

