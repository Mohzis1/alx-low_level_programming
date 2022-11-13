#include <stdlib.h>
#include "main.h"
#include <stdio.h>
/**
 * malloc_checked - Allocate memory using malloc
 * @b: amount of bytes
 * Return: a pointer to the allocated memory
 */
void *malloc_checked(unsigned int b)
{
	char *p;

	p = malloc(b);
	if (p == NULL)
		exit(98);
	return (p);
}
