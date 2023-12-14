#include "search_algos.h"


/**
 * jump_search - Searches for target element using jump srch algo
 * @array: Array to search
 * @size: Size of the array
 * @value: Target value being searched for
 * Return: Index of value if found, -1 otherwise
 */
int jump_search(int *array, size_t size, int value)
{
	size_t idx, tidx = 0, square, i;
	char *ptf = "Value checked array", *ptf2 = "Value found between indexes";

	if (!array)
		return (-1);

	square = sqrt(size);
	idx = square;

	while (tidx < size)
	{
		printf("%s[%ld] = [%d]\n", ptf, tidx, array[tidx]);

		if ((array[idx] >= value) || (tidx + square) > size)
		{

			printf("%s [%ld] and [%ld]\n", ptf2, tidx, idx);

			for (i = tidx; i <= idx && i < size; i++)
			{
				if (array[i] == value)
				{
					printf("%s[%ld] = [%d]\n", ptf, i, array[i]);
					return (i);
				}

				printf("%s[%ld] = [%d]\n", ptf, i, array[i]);
			}
		}

		tidx = idx;
		idx += square;
	}

	return (-1);
}
