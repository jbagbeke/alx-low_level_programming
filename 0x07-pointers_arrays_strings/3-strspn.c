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
	int count = 0;
	char *p = accept;

	while (*s && strchr(accept, *s++))
	{
	count++;
	}

	return count;
}
