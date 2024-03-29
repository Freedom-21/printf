#include "main.h"
#include <unistd.h>

/**
 * print_int - Print an integer value using putchar.
 *
 * This function takes an integer argument from the variable argument
 * list (va_list) and prints it digit by digit. It handles negative numbers
 * and uses _putchar to output each digit individually.
 * The variable 'magnitude' is used to determine the order
 * of magnitude for proper printing.
 *
 * @args: va_list containing the integer to be printed.
 * Return: The count of characters printed.
 */

int print_int(va_list args)
{
	int mag = 1;
	int count = 0;

	long int number = va_arg(args, int);
	long int rem_nums;

	if (number < 0)
	{
		count += _putchar('-');
		number *= -1;
	}

	if (number < 10)
		return (count += _putchar(number + '0'));
	rem_nums = number;

	while (rem_nums > 9)
	{
		mag *= 10;
		rem_nums /= 10;
	}

	while (mag >= 1)
	{
		count += _putchar(((number / mag) % 10) + '0');
		mag /= 10;
	}

	return (count);
}
