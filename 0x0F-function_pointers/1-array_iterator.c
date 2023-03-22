#include "function_pointers.h"
#include <stdio.h>
#include <stddef.h>

/**
 * array_iterator - prints each array elem on a newl
 * @array: array
 * @size: how many to be printed
 * @action: pointer to print
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i;

	if (array == NULL || action == NULL)
		return;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
