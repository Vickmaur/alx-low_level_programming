#include "main.h"

/**
 * _isupper - checks if a character is uppercase
 * @c:character to be tested 
 * Return: 1 of true, 0 of false
 */
int _isupper(int c)
{
	if ((c >= 'A' && c <= 'Z'))
		{
			return (1);
		}
	return (0);
}