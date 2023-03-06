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
	char *p = accept;
	int count = 0;

	while (*s != '\0')
	{
	{
		while (*s && strchr(accept, *s++));
	}
	count++;
	}

	return (count);
}
