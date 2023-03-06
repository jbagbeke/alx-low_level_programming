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
	char *s = &accept;
	int len = strnlen(*s, 6);

	printf("The length of the prefix substring is: %d\n", len);
	return (0);
}
