#include <stdlib.h>
#include <stdio.h>
#include "main.h"
/**
 *
 *
 *
 *
 */
char *_strdup(char *str)
{
	int size;
	char *hey;

	str = malloc(size * sizeof(*hey));
	if (str == NULL)
	{
		return (NULL);
	}
	free(str);
	return (str);
}
