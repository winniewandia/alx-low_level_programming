#include "main.h"

/**
 * set_string - sets the value of a pointer to a character
 * @s: The pointer to be dereferenced
 * @to: Pointer to string
 */

void set_string(char **s, char *to)
{
	*s = to;
}
