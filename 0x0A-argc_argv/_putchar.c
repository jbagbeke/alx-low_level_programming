#include <stdio.h>
#include "main.h"
/**
 * _putchar - Putting char
 * @c: Char C
 * Return: Void
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
