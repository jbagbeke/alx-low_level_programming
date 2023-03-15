#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "main.h"

/**
 * create_array - Prototype
 * @size: size of array
 * @c: character to be initialised to
 * Return: bee (success), NULL (Fail)
 */
char *create_array(unsigned int size, char c)
{
	char *bee;
	unsigned int i;

	bee = malloc(sizeof(char) * size);
	if (size == 0 || bee == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		bee[i] = c;
	}
	return (bee);
}
