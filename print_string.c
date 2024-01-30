#include "main.h"

/**
 * print_string - Print a string.
 *
 * This function is a specifier function for the 's' character.
 * It takes a va_list as an argument, extracts a string,
 * and prints it character by character using the _putchar function.
 * If the string is NULL, it prints "(null)".
 * If the string is empty, it returns -1 to indicate an error.
 *
 * @args: va_list containing the string to be printed.
 *
 * Return: The count of characters printed, or -1 on error.
 */

int print_string(va_list args)
{
	int i;
	int count = 0;

	char *s = va_arg(args, char *);

	if (!s)
		s = "(null)";

	if (s[0] == '\0')
		return (-1);

	for (i = 0; s[i] != '\0'; i++)
		count += _putchar(s[i]);

	return (count);
}
