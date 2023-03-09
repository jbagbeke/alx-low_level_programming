#include "main.h"
/**
 * _print_rev_recursion - reverses a string
 * @s: the string to be reversed
 * Return: void
 *main - Entry point
 */

void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
	else
		_putchar('\n');
}
