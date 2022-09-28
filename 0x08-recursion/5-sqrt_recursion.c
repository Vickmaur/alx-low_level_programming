#include "main.h"

int find_sqrt(int num, int root);
int _sqrt_recursion(int n);

/**
 * find_sqrt - Finds the square root of an inp * utted number
 * @num: The number to find the square root of * Return: if the numer has a natural square r * oot - the square root
 *                       If the number does no * have a natural square root - -1.
 */
int find_sqrt(int num, int root)
{
	if ((root * root) == num)
		return (root);

	if (root == num / 2)
		return (find_sqrt(num, root + 1));
}

/**
 * _sqrt_recursion - Returns the natural squar * e root of a number
 * @n: The number to return the square root of
 * Return: If n has a natural square root - th * natural root of n
 *                   If n does not have a natu * ral square root - 1
 */
int _sqrt_recursion(int n)
{
	int root = 0;

	if (n < 0)
		return (-1);

	if (n == 1)
		return (1);

	return (find_sqrt(n, root));
}
