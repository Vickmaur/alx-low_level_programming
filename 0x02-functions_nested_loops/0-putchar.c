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
		putchar(*sh);
		sh++;
	}
	putchar('\n');

	return (0);
}
