#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"
/**
 * print_numbers - Function to print numbers with separater
 * @n: Number of args entered
 * @separator: string to be printed between args
 * Return; void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list args;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
	printf("%d", va_arg(args, int));

	if (i != (n - 1) && separator != NULL)
	printf("%s", separator);
	}

	printf("\n");

	va_end(args);
}
