#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define PASSWORD_LENGTH 12
int main()
{
	char validChars[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789!@#$%^&*()_+-=[]{};':\",./<>?\\|";
	srand(time(NULL));
	char password[PASSWORD_LENGTH + 1];
	for (int i = 0; i < PASSWORD_LENGTH; i++)
	{
		int randomIndex = rand() % (sizeof(validChars) - 1);
		password[i] = validChars[randomIndex];
	}
	password[PASSWORD_LENGTH] = '\0';
	printf("Random password: %s\n", password);
	return (0);
}
