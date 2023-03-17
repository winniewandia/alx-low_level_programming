#include <stdio.h>

/**
 * main - Entry point
 *
 * Prints alphabet both lower and upper case
 * Return: Always 0 (Success)
 */

int main(void)
{
	char a;
	char A;

	a = 'a';
	A = 'A';
	while (a <= 'z')
	{
		putchar(a);
		a = a + 1;
	}
	while (A <= 'Z')
	{
		putchar(A);
		A = A + 1;
	}
	putchar('\n');
	return (0);
}
