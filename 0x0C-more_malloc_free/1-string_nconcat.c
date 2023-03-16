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
	char **hey;

	s2[n+1] = '\0';
	result = strcat(s1, s2[n]);
	hey = &result;

	hey = malloc(sizeof(*result));
	
	if (hey == NULL)
	{
		return (NULL);
	}
	if (n >= strlen(s2))
	{
		result = strcat(s1, s2);
	}
	else
	{
		result = ' ';
	}
	return (hey);
	free(hey_;
}
