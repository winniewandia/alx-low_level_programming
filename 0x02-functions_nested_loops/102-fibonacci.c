#include <stdio.h>

/**
 * fibonacci_numbers - Prints the first 50 fibonacci numbers
 */

void fibonacci_numbers(void)
{
	long int a, b, c, sum;

	 a = 0;
	 b = 1;
	for (c = 0; c < 50; c++)
	{
		sum = a + b;
		printf("%ld", sum);
		if (c == 49)
			break;
		putchar(',');
		putchar(' ');
		a = b;
		b = sum;
	}
	putchar('\n');
}
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	fibonacci_numbers();
	return (0);
}
