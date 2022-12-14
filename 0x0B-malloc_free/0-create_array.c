#include "main.h"
#include <stdlib.h>

/**
 * create_array - Creates an array of characte * rs.
 * @size: The size of the array to be initiali * zed.
 * @c: The specific char to intialize the arra * y with.
 * Return: If size == 0 or the function fails  * - NULL
 */
char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int index;

	if (size == 0)
		return (NULL);
	array = malloc(sizeof(char) * size);

	if (array == NULL)
		return (NULL);

	for (index = 0; index < size; index++)
		array[index] = c;

	return (array);
}
