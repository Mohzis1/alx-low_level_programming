#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: 0
 */

int main(void)
{
	int d;
	char hexavalues[] = "0123456789abcdef";

	for (d = 0; d < 16; d++)
	{
		putchar (hexavalues[d]);
	}
	putchar('\n');
	return (0);
}

