#include "main.h"

/**
 * print_line - print a striaght line using '_'
 * @n: number of '_' to be printed
 */
void print_line(int n)
{
	int len;

	if (n > 9)
	{
		for (len = 0; len <= n; len++)
			_putchar('_');
	}
	_putchar('\n');
}

