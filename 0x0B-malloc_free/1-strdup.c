#include <stdlib.h>
#include <stdio.h>
#include "main.h"
/**
 *_strdup - Function
 *@str: String to be accepted
 *Return: Hey
 *
 */
char *_strdup(char *str)
{
	char *hey;
	int i, r = 0;

	if (str == NULL)
		return (NULL);
	i = 0;
	while (str[i] != '\0')
		i++;

	hey = malloc(sizeof(char) * (i + 1));

	if (hey == NULL)
		return (NULL);

	for (r = 0; str[r]; r++)
		hey[r] = str[r];

	return (hey);
}
