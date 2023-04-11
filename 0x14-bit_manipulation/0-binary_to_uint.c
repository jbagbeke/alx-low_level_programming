#include "main.h"
#include <math.h>
/**
 *binary_to_uint - Function to convert bin to dec
 *@b: Pointer to string of binary numbers
 *Return: Result of function (num), 0 (failure)
 *
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int num = 0;
	int i;
	int d = 0;
	int hoo;

	if (b == NULL)
	{
	return (0);
	}

	for (i = strlen(b) - 1; i >= 0; i--)
	{
	if (b[i] != '0' && b[i] != '1')
	{
	return (0);
	}

	hoo = b[i] - '0';
	num += hoo + 2 * d;

	d++;
	}
	return (num);
}
