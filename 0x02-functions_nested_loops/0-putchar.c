#include "main.h"
/**
 * main - Entry point
 *
 * Return (0) (Success)
 */
int main(void)
{
	char *_putchar = "main.h";

	while (*_putchar)
	{
		putchar(*_putchar);
		_putchar++;
	}
	putchar('\n');

	return (0);
}


