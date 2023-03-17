#include <stdio.h>

/**
 * main - Entry point
 *
 * Prints alphabets in reverse
 * Return: Always 0 (Success)
 */

int main(void)
{
	char z;

	z =  'z';
	while (z >= 'a')
	{
		putchar(z);
		z--;
	}
	putchar('\n');
	return (0);
}
