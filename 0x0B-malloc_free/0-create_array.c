#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of chars, and initializes
 * @c: char to initialize
 * @size: number of bytes to allocate
 * Return: a pointer to the array or null if it fails
 */

char *create_array(unsigned int size, char c)
{
	char *ar;
	unsigned int i;

	if (size == 0)
		return (NULL);
	ar = malloc(sizeof(c) * size);

	if (ar == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		ar[i] = c;

	return (ar);
}
