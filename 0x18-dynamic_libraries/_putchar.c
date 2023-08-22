#include <unistd.h>
/**
 *_putchar - Function to return char to stdout
 *Return: char c
 *@c: Char c to be returned to stdout
 *
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
