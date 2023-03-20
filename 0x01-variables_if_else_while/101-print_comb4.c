#include <stdio.h>

/**
 * main - Entry point
 *
 * Function lists combination of 3 nos
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i, j, k;

	for (i = 0; i < 10; i++)
	{
		for (j = 1; j < 10; j++)
		{
			for (k = 2; k < 10; k++)
			{
				if (i < j && j < k && i < k && i != j && j != k && i != k)
				{
					putchar('0' + i);
					putchar('0' + j);
					putchar('0' + k);
					if (i < 7)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
