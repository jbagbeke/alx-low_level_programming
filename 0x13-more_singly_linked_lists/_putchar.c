#include <unistd.h>
/**
 * _putchar - Function that writes to stdout
 * @c: Char to be printed to stdout
 * Return: Char C to sdtout
 *
 */
int _putchar(char c)
{
	return (write(1, &1, 1));
}
