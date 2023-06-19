#include "main.h"
#include <stddef.h>

/**
 * _strpbrk - Searches a string for the first occurence
 * of any character from a specified set of characters
 * @s: Pointer to string that is to be searched
 * @accept: Pointer to string that contains set of characters to be searched
 *
 * Return: Pointer to first occurrence of any character
 */

char *_strpbrk(char *s, char *accept)
{
    char *p;

    while (*s != '\0')
    {
        p = accept;
        while (*p != '\0')
        {
            if (*s == *p)
            {
                return (s);
            }
            p++;
        }
        s++;
    }
    return (NULL);
}
