#include "main.h"
#include <stdio.h>

/**
 * fizz_buzz - prints numbers 1 - 100
 * if no is divisible by 3, prints fizz
 * if divisible by 5, prints buzz
 * if divisible by both, prints fizzbuzz
 */

void fizz_buzz(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if ((i % 3 == 0) && (i % 5 == 0))
		{
			printf("FizzBuzz ");
		}
		else if (i % 5 == 0)
		{
			printf("Buzz");
			if (i != 100)
			{
				putchar(' ');
			}
		}
		else if (i % 3 == 0)
		{
			printf("Fizz ");
		}
		else
		{
			printf("%d ", i);
		}
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
	fizz_buzz();
	return (0);
}
