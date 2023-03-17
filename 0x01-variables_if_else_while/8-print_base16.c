#include <stdio.h>

int main(void)
{
	char a;
	int hexa;

	a = 'a';
	hexa = 0;
	while (a <= 'f')
	{
		putchar(a);
		a++;
	}
	while (hexa < 10)
	{
		putchar('0' + hexa);
		hexa++;
	}
	putchar('\n');
	return (0);
}
