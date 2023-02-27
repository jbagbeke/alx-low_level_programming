#include "main.h"
#include <stdio.h>

/**
 * _strlen - Returns length of string
 * @s: input which is a character
 */

int _strlen(char *s)
{
	int length = 0;

	while (*s != '\0')
{	length++;
	s++;
}
	return (length);
}
