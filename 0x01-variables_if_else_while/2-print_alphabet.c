#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
*main - Print alphabet
*
* Return: 0
*/

int main(void)
{
	char low;

	for (low = 'a'; low <= 'z'; low++)
	{
		putchar(low);
	}
	printf("\n");
	return (0);
}
