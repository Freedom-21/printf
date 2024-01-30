#include "main.h"

/**
 * print_char - Print a single character.
 *
 * This function is a specifier function for the 'c' character. It takes a
 * va_list as an argument, extracts a character, and prints it using the
 * _putchar function. It always returns 1 to indicate the successful printing
 * of a single character.
 *
 * @args: va_list containing the character to be printed.
 *
 * Return: Always returns 1 (count of characters printed).
 */

int print_char(va_list args)
{
	char c = va_arg(args, int);

	_putchar(c);

	return (1);
}
