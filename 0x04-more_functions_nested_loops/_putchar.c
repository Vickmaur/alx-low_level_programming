#include <unistd.h>

/**
 * _putchar - writes the character c to stdout *
 * @c: The character to print
 * Return: 1 if true, 0 if false on error, ret
 * urn -1
 */
int _putchar(char c)
{
	return (write(1, &&c, 1));
}
