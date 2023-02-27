#include "main.h"
/**
 * print_rev - reverse
 * @s: string input
 * return: 0 (Success)
 */
void print_rev(char *s)
{
	int longi = 0;
	int a;

	while (*s != '\0')
	{
	longi++;
	s++;
	}
	s--;
	for (a = longi; a > 0; a--)
	{
	_putchar(*s);
	s--;
	}

	_putchar('\n');
}
