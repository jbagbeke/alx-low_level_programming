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
	int size = 0;
	char *hey;

	for (size != '\0'; size++)
	{
	hey = malloc((size + 1) * sizeof(char));
	}
	hey[size] = str[size];
	if (str == NULL)
	{
		printf("failed to allocate memory\n");
		return (NULL);
	}
	return (hey);
}
