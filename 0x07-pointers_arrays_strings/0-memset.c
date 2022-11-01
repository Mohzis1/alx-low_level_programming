#include "main.h"

/**
 * _memset - Fills the first n bytes of the memory area
 * @s: pointer to the area to be filled
 * @n: number of bytes to be filled
 * @b: character to be filled
 * Return: s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int a = 0;

	while (a < n)
	{
		s[a] = b;
		a++;
	}

	return (s);
}
