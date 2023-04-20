#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H

#include <stdarg.h>
#include <stdio.h>

int _putchar(char c);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

/**
 * struct Types - holds all types for the arguments
 * @char_ptr: Character pointer
 * @type_ptr: Type pointer
 */

typedef struct Types
{
	char *char_ptr;
	char *type_ptr;
} types;

#endif
