#include <stdio.h>
#include "main.h"
/**
 *main - Entry point
 *@argc: Argument counter
 *@argv: Argument vector
 *
 *Return: 0 (Success)
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);

	return (0);
}

