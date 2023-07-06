#include "main.h"

/**
 * flip_bits - counts the number of bit to change
 * @n: first number
 * @m: second number
 * Return: number of bits to be changed (hoo)
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i;
	int hoo = 0;
	unsigned long int hey;
	unsigned long int hehe = n ^ m;

	for (i = 63; i >= 0; i--)
	{
		hey = hehe >> i;
		if (hey & 1)
		hoo++;
	}

	return (hoo);
}
