#include "main.h"

/**
 * print_alphabet_x10 - prints the alphabet 10 times
 */

void print_alphabet_x10(void)
{
	int times;
	char alph;

	times = 0;
	while (times < 10)
	{
		alph = 'a';
		while (alph <= 'z')
		{
			_putchar(alph);
			alph++;
		}
		_putchar('\n');
		times++;
	}
}

