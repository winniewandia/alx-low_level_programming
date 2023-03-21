#include <unistd.h>
#include <string.h>

/**
 * main - Entry point
 *
 * Calls the putchar fxn
 * Return: Always (0) Success
 */

int main(void)
{
	int i;

	char ch[9] = "_putchar";
	i = 0;
	#include "main.h"
	while (i < strlen(ch))
	{
		_putchar(ch[i]);
		i++;
	}
	_putchar('\n');
	return (0);
}

