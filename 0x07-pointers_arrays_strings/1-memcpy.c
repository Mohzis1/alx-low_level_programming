#include "main.h"

/**
 * _memcpy - copies memory area
 * @dest: memory to be stored
 * @src: memory to be copied
 * @n: number of bytes
 * Return: pointer to @dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; i++)
	{
		dest[a] = src[a];
	}

	return (dest);
}
