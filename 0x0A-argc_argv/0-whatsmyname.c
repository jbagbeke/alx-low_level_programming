#include <stdio.h>
#include <stdlib.h>
/**
 *main - Entry point
 *@argc: Argument counter
 *@argv: Argument vector
 *
 *Return: 0 (Success)
 */
int main(int argc, *argv[])
{
	printf("The file name is: %s\n", strrchr(argv[0], '/'));
	return (0);
}
