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
	int low;
	char hexavalues[] = "0123456789abcdef";

	for (d = 0; d < 16; d++)
	putchar(d);

	for (low = 'a'; low <= 'f'; low++)
		putchar(low);

	putchar('\n');
	return (0);
}

