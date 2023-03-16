#include <stdlib.h>
#include <stdio.h>
#include "main.h"
/**
 *malloc_checked - Function that takes one argument
 *@b: An unsigned int
 *
 *
 *Return: void
 *
 */
void *malloc_checked(unsigned int b)
{
	void *hey;

	hey = malloc(b);

	if (hey == NULL)
	{
		exit(98);
	}
	
	return (hey);
}
