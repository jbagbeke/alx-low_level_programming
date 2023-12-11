#include "search_algos.h"

/**
 * linear_search - Searches for value using the Linear search algorithm
 * @array: Array to be searched
 * @size: Size of the array
 * @value: Value to compare in the array
 * Return: Index of where value to be searched matches value in array
 */
int linear_search(int *array, size_t size, int value)
{
	size_t idx = -1;

	if (!array)
		return (-1);

	while (++idx < size)
	{
		if (array[idx] == value)
		{
		printf("Value checked array[%ld] = [%d]\n", idx, array[idx]);
		return (idx);
		}

		printf("Value checked array[%ld] = [%d]\n", idx, array[idx]);
	}

	return (-1);
}
