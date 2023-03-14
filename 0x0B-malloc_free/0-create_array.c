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

	bee = malloc(size * sizeof(char));

	for (unsigned int i = 0; i < size; i++)
	{
	bee[i] = c;
	}

	if (bee == NULL)
	{
	printf("Memory allocation failed\n");
	return (NULL);
	}
	return (bee);
}

/**
 * main - Entry point
 * Return: 0 (Success)
 */
int main(void)
{
	unsigned int size;
	char c;

	printf("Enter the size of array: \n");
	scanf("%u", &size);
	printf("Enter char you want to initialise to: \n");
	scanf(" %c", &c);

	char *bee = create_array(size, c);

	if (bee != NULL)
	{
	printf("The array of size %u is initialised to %c\n", size, c);

	for (int i = 0; i < size; i++)
	{
		printf("%c", bee[i]);
	}

	free(bee);
	}

	return (0);
}
