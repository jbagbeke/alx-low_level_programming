#include "main.h"
#include <stdio.h>

/**
 *_memset - Fills memory
 *@s: a character
 *@b: another character
 *@n: an integer
 * Return: s (Success)
 */

char *_memset(char *s, char b, unsigned int n)
{
	char *p = s;

	while (n--)
{
	*p++ = b;
}
	return (s);
}
