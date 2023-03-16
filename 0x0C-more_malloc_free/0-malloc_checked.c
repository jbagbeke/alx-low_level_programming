#include <stdlib.h>
#include <stdio.h>
#include "main.h"
#include <limits.h>
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

	hey = malloc(size * sizeof(UINT_MAX));

	if (hey = 0)
	{
		exit(98);
	}
	
	else
	{
		free(hey);
	}
}
