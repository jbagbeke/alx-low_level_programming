#include "main.h"
#include <stdio.h>
/**
 * _strlen_recursion - String lenght of s
 * Return: n
 *@s: string
 */

int _strlen_recursion(char *s)
{
	int n = 0;

	if (*s)
	{
		n++;
	n += _strlen_recursion(s + 1);
	}
	return (n);
}
