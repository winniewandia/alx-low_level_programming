#include "main.h"

/**
 * print_alphabet_x10 - prints the alphabet 10 times
 */

void print_alphabet_x10(void)
{
	int times;
	char alph;

	alph = 'a';
	for (times = 0; times < 10; times++)
	{
		while (alph <= 'z')
		{
			_putchar(alph);
			alph++;
		}
	}
	_putchar('\n');
}

