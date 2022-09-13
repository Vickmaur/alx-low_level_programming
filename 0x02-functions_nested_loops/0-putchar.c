#include "main.h"
/**
 * main - Entry point of program
 *
 * Return: 0 always (Success)
 */
int main(void)
{
	char *sh = "_putchar";

	while (*sh)
	{
		_putchar(*sh);
		sh++;
	}
	_putchar('\n');

	return (0);
}
