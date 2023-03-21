#include <unistd.h>
#include <string.h>

/**
 * _putchar - Used to write a character on stdout
 * @c: the character to be printed
 *
 * Return: On success 1
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}

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
	while (i < strlen(ch))
	{
		_putchar(ch[i]);
		i++;
	}
	_putchar('\n');
	return (0);
}

