#include "main.h"
#include <unistd.h>
/**
 * _putchar - writes char to stdout
 * @c: Char to be printed
 * Return: 1
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
