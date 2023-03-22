#include "main.h"
#include <stdio.h>

/**
 * natural_numbers - prints all natural numbers below 1024
 * that are multiples of 3 and 5 and adds them
 */

void natural_numbers(void)
{
	int n, sum;

	n = 0;
	sum = 0;
	while (n < 1024)
	{
		if (n % 3 == 0 || n % 5 == 0)
			sum += n;
		n++;
	}
	printf("%d", sum);
	putchar('\n');
}
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	natural_numbers();
	return (0);
}

