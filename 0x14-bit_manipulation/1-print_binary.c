#include "main.h"

/**
 * print_binary - Function to convert decimal number to binary
 * @n: number to convert to binary
 */
void print_binary(unsigned long int n)
{
	int i;
	int hey = 0;
	unsigned long int hoo;

	for (i = 65; i >= 0; i--)
	{
	hoo = n >> i;

	if (hoo & 1)
	{
	_putchar('1');
	hey++;
	}
	else if (hey)
	_putchar('0');
	}
	if (!hey)
	_putchar('0');
}
