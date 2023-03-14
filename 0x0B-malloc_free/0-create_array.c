#include "main.h"
#include <stdio.h>

/**
 *create_array - Function
 *@size: Size of memory to be allocated
 *@c: Char initialise
 *Return: Void
 */
char *create_array(unsigned int size, char c)
{
	char park[5] = {'c'};
	char *bee;

	bee = (*char)malloc(size * sizeof(char));
	
	if (size == 0)
	{
		return (NULL);
	}

	free(bee);
}
