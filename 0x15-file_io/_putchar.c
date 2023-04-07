#include <unistd.h>
/**
 *_putchar - Function to return char to stdout
 *@c: char to be returned to stdout
 *Return: Char c to stdout
 *
 *
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
