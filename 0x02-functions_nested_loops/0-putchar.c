#include <unistd.h>
#include <string.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Calls the putchar fxn
 * Return: Always (0) Success
 */

int main(void)
{
	unsigned long int i;

	char ch[9] = "_putchar\0";

	i = 0;
	while (i < strlen(ch))
	{
		_putchar(ch[i]);
		i++;
	}
	_putchar('\n');
	return (0);
}

