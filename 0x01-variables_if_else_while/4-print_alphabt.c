#include <stdio.h>

/**
 * main - Entry point
 *
 * prints the alphabets except q and e
 * Return: Always 0 (Success)
 */

int main(void)
{
	char a;

	a = 'a';
	while (a <= 'z')
	{
		if (a != 'q' && a != 'e')
		{
			putchar(a);
		}
		a = a + 1;
	}
	putchar('\n');
	return (0);
}

