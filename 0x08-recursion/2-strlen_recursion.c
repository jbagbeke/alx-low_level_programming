#include "main.h"
#include <stdio.h>
/**
 * _strlen_recursion - String lenght of s
 * Return: n
 *@s: string
 */

int _strlen_recursion(char *s)
{
	_putchar(*s);

	int n;

	n = _strlen_recursion(s);
	printf("The length of string is %d\n", n);
	return (n);
}
