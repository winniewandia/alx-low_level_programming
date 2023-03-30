#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <ctype.h>

/**
 * generate_password - Generate a random password that satisfies certain criteria.
 * @length: The length of the password to generate.
 *
 * Return: A pointer to the generated password, or NULL if an error occurred.
 */
char *generate_password(length)
int length;
{
    /* Define valid password characters */
    char letters[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
    char digits[] = "0123456789";
    char special_chars[] = "!@#$%^&*()_+={}[]\\|;:'\",.<>?/";

    /* Seed the random number generator */
    srand(time(NULL));

    /* Allocate memory for password */
    char *password = malloc((length + 1) * sizeof(char));
    if (!password)
        return NULL;

    /* Choose at least one character from each category */
    password[0] = letters[rand() % 52];
    password[1] = letters[rand() % 52];
    password[2] = digits[rand() % 10];
    password[3] = special_chars[rand() % 31];

    /* Fill remaining password characters with random characters */
    int i;
    for (i = 4; i < length; i++)
    {
        int choice = rand() % 3;
        if (choice == 0)
            password[i] = letters[rand() % 52];
        else if (choice == 1)
            password[i] = digits[rand() % 10];
        else
            password[i] = special_chars[rand() % 31];
    }

    /* Shuffle password characters */
    for (i = 0; i < length; i++)
    {
        int j = rand() % length;
        char temp = password[i];
        password[i] = password[j];
        password[j] = temp;
    }

    /* Null-terminate the password string */
    password[length] = '\0';

    return (password);
}

/**
 * main - Entry point of the program.
 *
 * Return: Always 0.
 */
int main()
{
    /* Generate and print a random password */
    char *password = generate_password(12);
    printf("%s\n", password);
    free(password);
    return (0);
}

