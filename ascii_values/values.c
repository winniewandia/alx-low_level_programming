#include <stdio.h>

int main(void)
{
	char value;

	printf("enter character" );
	scanf("%c", &value);
	printf("the ascii value of %c is %d", value, value);
	return (0);
}
