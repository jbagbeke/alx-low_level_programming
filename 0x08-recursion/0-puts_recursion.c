#include "main.h"
#include <stdarg.h>
#include <stdio.h>
/**
 *_puts_recursion - puts recursion
 *@s: character s
 *Return: 0 (Success)
 */
void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else
	_putchar ('\n');
}
