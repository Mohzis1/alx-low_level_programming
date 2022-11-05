#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * main - print the name of the program
 * @argc: count argument
 * @argv: argument
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int i = 0;

	while (argc--)
	{
		printf("%s\n", argv[i]);
		i++;
	}
	return (0);
}
