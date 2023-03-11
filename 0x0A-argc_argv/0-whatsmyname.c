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
	char path[200];

	realpath(argv[0], path);
	printf("The file name is: %s\n", path);
	return (0);
}
