#include "main.h"

/**
 * factorial - Prints the factorial of a given * integer
 * @n: The given integer
 * Return: -1 if integer is less than 0,and 0  * if integer is 1
 */
int factorial(int n)
{
	int result = n;

	if (n < 0)
		return (-1);
	else if (n >=0 && n <= 1)
		return (1);

	result *= factorial(n - 1);

	return (result);
}
