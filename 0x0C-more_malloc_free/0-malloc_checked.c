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

	hey = malloc(size * sizeof(UINT_MAX));

	if (hey == 0)
	{
		return (98);
	}
	
	else
	{
		free(hey);
	}
	return (hey);
}
