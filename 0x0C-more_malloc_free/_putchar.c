#include "main.h"
#include <unistd.h>
/**
 * _putchar - writes a chaar c to stdout
 * @c: character c
 *
 * Return: 1, -1
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
