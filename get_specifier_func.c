#include "main.h"

/**
 * get_specifier_func - selects the appropriate specifier function
 * based on input format
 * @con_spec: input format specifier character
 * @args: va_list containing the variable arguments
 * Return: character count returned by the selected specifier function
 */

int get_specifier_func(char con_spec, va_list args)
{
	int i = 0;
	int count = 0;

	specifier_c spec[] = {
		{'c', print_char},
		{'s', print_string},
		{'%', print_percent},
		{'i', print_int},
		{'d', print_int},
		{0, NULL}
	};

	while (spec[i].specifier)
	{
		if (con_spec == spec[i].specifier)
			count += spec[i].f(args);
		i++;
	}

	if (count == 0)
	{
		count += _putchar('%');
		count += _putchar(con_spec);
	}

	return (count);
}
