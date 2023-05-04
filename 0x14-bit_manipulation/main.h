#ifndef MAIN_H
#define MAIN_H

#include <stddef.h>
#include <unistd.h>

int _putchar(char c);
unsigned int _power(unsigned int base, unsigned int pow);
unsigned int binary_to_uint(const char *b);
unsigned long int _powerl(unsigned long int base, unsigned long int pow);
void print_binary(unsigned long int n);
int get_bit(unsigned long int n, unsigned int index);

#endif
