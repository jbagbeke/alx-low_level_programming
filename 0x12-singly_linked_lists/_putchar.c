#include <unistd.h>
/**
 *_putchar - Function to write char to stdout
 *@c: Char to be written to stdout
 *Return: An integer
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
