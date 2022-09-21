#include "main.h"

/**
 * _strcmp - Compares pointers to two strings
 * @s1: A pointer to the first string to be co * mpared
 * @s2: A pointer to the second string to be c * ompared
 * Return: If str1 < str2, the negative differ * ence of the first 2 unmatched strings
 */
int _strcmp(char *s1, char *s2)
{
	while ((*s1 && *s2) && (*s1 == *s2))
	{
		s1++;
		s2++;
	}
	return(*s1 - *s2);
}
