#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - nested loop to make grid
 * @width: input width
 * @height:input of height
 * Return: pointer to 2d array
 */
int **alloc_grid(int width, int height)
{
	int **ewo;
	int x, y;

	if (width <= 0 || height <= 0)
	return (NULL);

	ewo = malloc(sizeof(int *) * height);

	if (ewo == NULL)
	return (NULL);

	for (x = 0; x < height; x++)
	{
	ewo[x] = malloc(sizeof(int) * width);

	if (ewo[x] == NULL)
	{
	for (; x >= 0; x--)
	free(ewo[x]);

	free(ewo);
	return (NULL);
	}
	}

	for (x = 0; x < height; x++)
	{
	for (y = 0; y < width; y++)
	ewo[x][y] = 0;
	}

	return (ewo);
}

