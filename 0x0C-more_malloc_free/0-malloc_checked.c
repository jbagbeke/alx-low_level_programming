#include <stdlib.h>
#include <stdio.h>
#include "main.h"
#include <limits.h>
/**
 *
 *
 *
 *
 *
 *
 */
void *malloc_checked(unsigned int b)
{
	char *hey;
	int size;
	int status = 98;

	hey = malloc(size * sizeof(UINT_MAX));

	if (hey == 0)
	{
		exit(status);
	}
	
	else
	{
		free(hey);
	}
}
