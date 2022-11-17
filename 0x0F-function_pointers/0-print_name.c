#include <stdio.h>
#include  "function_pointers.h"

/**
 * print_name - a function to print name
 * @f: funtion pointer
 * @name: pointer name to print
 */
void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
