#include <stdio.h>

/**
 * main - Entry point
 *
 * Prints combinations of two two numbered values
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i, j, k, l, ij, kl;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			for (k = 0; k < 10; k++)
			{
				for (l = 0; l < 10; l++)
				{
					ij = (i * 10) + j;
					kl = (k * 10) + l;
					if (ij < kl)
					{
					putchar('0' + i);
					putchar('0' + j);
					putchar(' ');
					putchar('0' + k);
					putchar('0' + l);
					if (i == 9 && j == 8)
					continue;
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
