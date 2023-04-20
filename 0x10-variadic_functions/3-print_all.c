#include "variadic_functions.h"

/**
 * print_all - Prints anything
 * @format: List of types of arguments passed to the function
 */

void print_all(const char * const format, ...)
{
	va_list args;
	int i = 0;
	char c, *s;
	float f;
	int num;

	va_start(args, format);
	while (format[i] != '\0')
	{
		if (format[i] == 'c')
		{
			c = va_arg(args, int);
			printf("%c", c);
		}
		else if (format[i] == 'i')
		{
			num = va_arg(args, int);
			printf("%d", num);
		}
		else if (format[i] == 'f')
		{
			f = va_arg(args, double);
			printf("%f", f);
		}
		else if (format[i] == 's')
		{
			s = va_arg(args, char*);
			if (s == NULL)
			{
				printf("(nil)");
			}
			else if (s != NULL)
			{
				printf("%s", s);
			}
		}
		i++;
	}
	printf("\n");
}

