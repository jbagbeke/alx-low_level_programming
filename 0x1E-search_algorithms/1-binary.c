#include "search_algos.h"


size_t bin_srch(size_t low, size_t mid, size_t high, int value, int *array);
void print_array(int *array, size_t start, size_t end);


/**
 * binary_search - Searches for value using the Binary search algorithm
 * @array: Array to search
 * @size: Size of the array
 * @value: Value to search for in the array
 * Return: Index of the value if found, -1 otherwise
 */
int binary_search(int *array, size_t size, int value)
{
	size_t index;

	if (!array || (size < 1))
		return (-1);

	index = bin_srch(0, (size - 1) / 2, size - 1, value, array);

	return (index);
}


/**
 * bin_srch - Uses recursion to search an array
 * @low: Low index of array
 * @mid: Middle index of array
 * @high: High index of the array
 * @value: Value to search for
 * @array: Array containing value being searched for
 * Return: Index where match is found, -1 otherwise
 */
size_t bin_srch(size_t low, size_t mid, size_t high, int value, int *array)
{
	size_t idx, tmp;

	if (low > high)
		return (-1);

	print_array(array, low, high);

	if (array[mid] == value)
		return (mid);

	tmp = (mid + 1) + high;

	if (value < array[mid])
		idx = bin_srch(low, (mid - 1) / 2, mid - 1, value, array);
	else if (value > array[mid])
		idx = bin_srch(mid + 1, tmp / 2, high, value, array);

	return (idx);
}


/**
 * print_array - Prints an array
 * @array: Array to be printed
 * @start: Beginning of the array being printed
 * @end: End of the array being printed
 * Return: Void
 */
void print_array(int *array, size_t start, size_t end)
{
	printf("Searching in array: ");

	while (start <= end)
	{
		printf("%d", array[start]);

		if (start < end)
			printf(", ");
		else
			printf("\n");

		start++;
	}
}
