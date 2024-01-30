#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>

/**
 * struct specifier - Structure that defines a specifier and its
 * corresponding function.
 * @specifier: The specifier character.
 * @f: The function associated with the specifier.
 */

typedef struct specifier
{
	char specifier;
	int (*f)(va_list);

} specifier_c;

int _putchar(char c);
int _printf(const char *format, ...);
int get_specifier_func(char s, va_list args);
int print_char(va_list args);
int print_string(va_list args);
int print_int(va_list args);
int print_percent(va_list args);

#endif /* MAIN_H */
