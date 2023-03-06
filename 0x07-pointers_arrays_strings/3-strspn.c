#include "main.h"
#include <stdio.h>
/**
 *_strspn - length of prefix
 *Return: Always 0 (Success)
 *@s: string
 *@accept: prefix
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;
	int i, j, read;

	for (i = 0; s[i]; i++)
{
	read = 0;
	for (j = 0; accept[j]; j++)
{
	if (s[i] == accept[j])
{
	read = 1;
	count++;
	break;
}
}
	if (!read)
	break;
}

	return (count);
}

