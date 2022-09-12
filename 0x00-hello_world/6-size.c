#include <stdio.h>

/**
 * main - A program that prints different 
 * sizes
 *
 * Return: always 0 (Success)
 */
int main()
{
	char charType;
	int intType;
	long longType;
	long long longlongType;
	float floatType;

	printf("Size of a char: %zu byte(s)\n", sizeof(charType));
	printf("Size of an int: %zu byte(s)\n", sizeof(intType));
	printf("Size of a long int: %zu byte(s)\n", sizeof(longType));
	printf("Size of a long long int: %zu byte(s)\n", sizeof(longlongType));
	printf("Size of a float: %zu byte(s)\n", sizeof(floatType));


	return (0);
}
