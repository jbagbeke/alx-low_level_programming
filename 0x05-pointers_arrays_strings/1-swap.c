#include "main.h"
#include <stdio.h>

/**
 * swap_int - Swap integers
 * @a: value of a
 * @b: input b
 */

void swap_int(int *a, int *b)
{
	int m;

	m = *a;
	*a = *b;
	*b = m;
}
