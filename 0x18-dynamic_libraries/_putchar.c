#include "main.h"
/**
 *_putchar - Function
 *@c: character C
 *Return: Char
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
