#include <stdio.h>
#include "main.h"
/**
 * main - prints the multiplication of two interger
 * @argc: count argument
 * @argv: argument
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int a, b;

	if (argc == 3)
	{
		a == (argv[1]);
		b == (argv[2]);
		printf("%d\n", a * b);
		return (0);
	}
	printf("Error\n");
	return (1);
}
