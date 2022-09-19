#include "main.h"
#include <stdio.h>

/**
 * print_array - print 'n' elements of an arra * y of integers
 * @a: int type array pointer
 * @n: int type integer
 * Description: Numbers must be separated by c * comma and space
 * Numbers should be displayed in the same ord * er they are stored in array
 * You can only use _putchar to print
 */
void print_array(int *a, int n)
{
	int i;

	i = 0;
	for (n--; n >= 0; n--, i++)
	{
		printf("%d", a[i]);
		if (n > 0)
		{
			printf(", ");
		}
	}
	printf("\n");
}
