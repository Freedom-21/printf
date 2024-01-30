#include "main.h"

/**
 * _printf - Emulate the behavior of the standard printf function.
 *
 * This function parses the format string and processes any format specifiers,
 * invoking the appropriate functions to print formatted output.
 * It handles various edge cases, such as NULL format,
 * invalid specifiers, and spaces following '%'.
 *
 * @format: Format string containing plain text and format specifiers.
 * Return: The total count of characters successfully printed, or -1 on error.
 */

int _printf(const char *format, ...)
{
	int i = 0, c = 0;
	int count;
	va_list args;

	va_start(args, format);
	if (!format || (format[0] == '%' && !format[1]))
		return (-1);
	if (format[0] == '%' && format[1] == ' ' && !format[2])
		return (-1);

	while (format[i])
	{
		count = 0;
		if (format[i] == '%')
		{
			if (!format[i + 1] || (format[i + 1] == ' ' && !format[i + 2]))
			{
				c = -1;
				break;
			}
			count += get_specifier_func(format[i + 1], args);

			if (count == 0)
				c += _putchar(format[i + 1]);
			if (count == -1)
				c = -1;
			i++;
		}
		else
		{
			(c == -1) ? (_putchar(format[i])) : (c += _putchar(format[i]));
		}
		i++;
		if (c != -1)
			c += count;
	}
	va_end(args);
	return (c);
}
