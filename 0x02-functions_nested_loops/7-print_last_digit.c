#include "main.h"
/**
 * print_last_digit - print the last digit
 * @k: the number
 * Return: last digit
 */
int print_last_digit(int k)
{
	int ld = k % 10;

	if (ld < 0)
		ld *= -1;

	_putchar(ld + '0');
	return (0);
}

