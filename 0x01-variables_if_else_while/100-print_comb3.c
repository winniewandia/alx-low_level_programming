#include <stdio.h>

/**
 * main - Entry point
 *
 * Prints combination of 2 numbers
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i, j;

	for (i = 0; i < 10; i++)
	{
		for (j = 1; j < 10; j++)
		{
			if (i < j && i != j)
			{
				putchar('0' + i);
				putchar('0' + j);
				if (i < 8)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
