#include "main.h"

/**
 * print_percent - Print the '%' character.
 *
 * This function is a specifier function for the '%' character. It takes a
 * va_list as an argument (unused in this case) and prints the '%' character
 * using the _putchar function. It always returns 1 to indicate the successful
 * printing of the '%' character.
 *
 * @args: Unused va_list (no arguments needed for '%').
 *
 * Return: Always returns 1 (count of characters printed).
 */

int print_percent(va_list args)
{
	(void)args;

	_putchar('%');

	return (1);
}
