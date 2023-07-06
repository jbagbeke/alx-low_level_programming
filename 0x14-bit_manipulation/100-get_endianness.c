#include "main.h"

/**
 * get_endianness - checks endian of a machine
 * Return: 0 (big), 1 (little)
 */
int get_endianness(void)
{
	unsigned int i = 1;
	char *a;

	a = (char *) &i;

	return (*a);
}
