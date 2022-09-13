#include "main.h"
/**
 * main - Entry point
 *
 * Return (0) (Success)
 */
int main(void)
{
	char *sh = "main.h";

	while (*sh)
	{
		putchar(*sh);
		sh++;
	}
	putchar('\n');

	return (0);
}


