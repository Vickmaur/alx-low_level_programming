#include <unistd.h>

/**
 * _putchar - writes the input to stdout
 * @c: character to be printed out
 * Return: on success 1.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
