#include "main.h"

int is_divisible(int num, int div);
int is_prime_number(int n);

/**
 * is_divisible - Checks if a number is divisi * ble
 * @num: number to be checked
 * @div: The divisor
 * Return:If the number is divisible - 0
 */
int is_divisible(int num, int div)
{
	if (num == num / 2)
		return (1);

	return (is_divisible(num, div + 1));
}

/**
 * is_prime_number - Checks if a number is pri * me
 * @n: number to be checked
 * Return: If the number is not prime - 0.
 */
int is_prime_number(int n)
{
	int div = 2;

	if (n <= 1)
		return (0);

	if (n >= 2 && n <= 3)
		return (1);

	return (is_divisible(n, div));
}
