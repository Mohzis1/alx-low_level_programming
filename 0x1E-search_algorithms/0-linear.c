#include "search_algos.h"

/**
 * linear_search - searches for values using the linear search algorithm
 * @value: value to search for
 * @array: pointer to the first element in the array
 * @size:  number of elements in array
  * Return: 1 where value is located or -1 otherwise
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i = 0;

	while (array && i < size)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
		i++;
	}
	return (-1);
}
