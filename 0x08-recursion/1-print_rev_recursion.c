#include "main.h"
/**
 * _print_rev_recursion - reverses a string
 * @s: the string to be reversed
 * Return: void
 */

void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		_print_rev_recursion(s + 1);
	}
	else
		_putchar('\n');

}
