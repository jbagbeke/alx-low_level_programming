#include <stdio.h>
#include "function_pointers.h"
#include <ctype.h>

void print_name(char *name, void (*f)(char *));

void print_name_lower(char *name)
{
	while (*name != '\0')
	{
		_putchar(tolower(*name));
		*name++;
	}

	_putchar('\n');
}

void print_name_upper(char *name)
{
	while (*name != '\0')
	{
		_putchar(toupper(*name));
		*name++
	}

	_putchar('\n');
}

int main(void)
{
	char name[];

	print_name(name, print_name_lower);
	print_name(name, print_name_upper);
	_putchar('\n');

	return (0);
}

void print_name(char *name, void (*f)(char *))
{
	(*f)(name);
}
