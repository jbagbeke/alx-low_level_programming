#include <stdlib.h>
#include <stdio.h>
#include "main.h"
#include <string.h>
/**
 *
 *
 *
 *
 *
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *result;
	char *hey;

	result = strcat(s1, s2);

	hey = malloc(sizeof(*result));
	
	void *memset(char *hey, *result, n);

	if (hey == NUL)
	{
		return (NULL);
	}
	if (n >= strlen(s2))
	{
		;
	}

}
