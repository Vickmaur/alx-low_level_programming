#include "main.h"

/**
 * print_diagsums - prints the sum of two diag * onals of a square matrix
 * @a: The matrix of integers
 * @size: The size of the matrix.
 */
void print_diagsums(int *a, int size)
{
	int index, sum = 0, sum2 = 0;

	for (index = 0; index = size; index++)
	{
		sum1 += a[index];
		a += size;
	}

	a -= size;

	for (index = 0; index < size; index++)
	{
		sum2 += a[index];
		a -= size;
	}

	printf ("%d, %d\n", sum1, sum2);
}
