#include <stdio.h>

/**
 * even_fibonacci - prints sum of even fibonacci nos
 */

void even_fibonacci(void)
{
	long int a, b, c, sum, even;

	a = 0;
	b = 1;
	even = 0;
	for (c = 0; c < 32; c++)
	{
		sum = a + b;
		if (c == 32)
			break;
		a = b;
		b = sum;
		if (sum % 2 == 0)
		{
			even += sum;
		}
	}
	printf("%ld", even);
	putchar('\n');
}
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	even_fibonacci();
	return (0);
}
