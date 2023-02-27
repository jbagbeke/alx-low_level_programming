#include "main.h"
/**
 * puts2 - print one char
 * @str: input
 * Return:hehehe
 */
void puts2(char *str)
{
	int length = 0;
	int b = 0;
	char *b = str;
	int o;

	while (*b != '\0')
	{
	b++;
	length++;
	}
	b = length - 1;
	for (o = 0 ; o <= b ; o++)
	{
	if (o % 2 == 0)
	{
	_putchar(str[o]);
	}
	}
	_putchar('\n');
}
