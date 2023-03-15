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
	int size = 10;
	char *hey[100];

	str = malloc(size * sizeof(*hey));
	if (str == NULL)
	{
		printf("failed to allocate memory\n");
		return (NULL);
	}
	return (str);
}
