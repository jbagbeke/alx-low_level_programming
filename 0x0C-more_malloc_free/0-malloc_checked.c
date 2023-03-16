#include <stdlib.h>
#include <stdio.h>
#include "main.h"
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
	int size;
	char *hey;

	hey = malloc(size * sizeof(unsigned int));

	if (hey == 0)
	{
		return (98);
	}
	
	else
	{
		free(hey);
	}
}
