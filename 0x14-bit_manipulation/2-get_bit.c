#include "main.h"

/**
 * get_bit - gives the value of a bit at an index in decimal number
 * @n: number
 * @index: bit index
 *
 * Return: bit value (hoo)
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int hoo;

	if (index > 63)
	{
	return (-1);
	}

	hoo = (n >> index) & 1;

	return (hoo);
}
