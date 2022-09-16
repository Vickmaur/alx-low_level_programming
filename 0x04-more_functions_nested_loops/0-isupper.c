#include "main.h"

/**
 * _isupper - checks if a character is upperc
 * e
 * @c:character to be analysed
 * Return 0 or 1
 */

int _isupper(int c)
{
	if (c > 64 && c <91)
	{
		return (0);
	}
	else
	{
		return (1);
	}
}
