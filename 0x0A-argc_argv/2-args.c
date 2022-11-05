#include <stdio.h>
#include "main.h"
/**
 * main - print the name of the program
 * @argc: count argument
 * @argv: argument
 * Return: 0
 */

int main(int argc, char *argv[])
{
	/* Declaring variables */
	int count = 0;

	if (argc > 0)
	{
		/* WHILE - print each argument */
		while (count < 0)
		{
			printf("%s\n", argv[count]);
			count++;
		}
	}
	return (0);
}
