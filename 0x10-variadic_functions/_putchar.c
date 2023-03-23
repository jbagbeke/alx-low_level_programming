#include <unistd.h>
/**
 * _putchar - writes char to stdout
 * @c: char to be printed
 * Return: 1(success), -1(Error)
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
