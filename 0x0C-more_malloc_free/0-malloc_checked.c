#include <stdlib.h>
#include <stdio.h>
#include "main.h"
/**
 *malloc_checked - Function that takes one argument
 *@b: An unsigned int
 *
 *
 *
 *
 */
void *malloc_checked(unsigned int b)
{
	char *hey;
	int size;

	hey = malloc(size * sizeof(unsigned int));

	if (hey != NULL)
	{
		free(hey);
	}
	
	else
	{
		exit(98);
	}
}
