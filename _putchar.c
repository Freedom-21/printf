#include <unistd.h>

/**
 * _putchar - print characters with stdandard output
 * @c: character to be written
 * Return: on success, 1. on error, -1 is returned, 
 *	and errno is set appropriately.
 */

int _putchar(char c)
{
	return write(1, &c, 1);	
}
