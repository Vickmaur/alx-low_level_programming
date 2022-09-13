#include "main.h"
/**
 * _abs - a function that computes the absolu
 * te value of an integer.
 * @ab: integer input
 * Return: absolute value of ab
 */
int abs(int ab)
{
	return (ab * ((ab > 0) - (ab < 0)));
}
