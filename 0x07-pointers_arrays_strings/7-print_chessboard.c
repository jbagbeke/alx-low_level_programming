#include "main.h"
#include <stdio.h>
/**
 * print_chessboard - Entry point
 * @a: array
 * Return: Void
 */
void print_chessboard(char (*a)[8])
{
	int i, j;
	for (i = 0; i < 8; i++)
{
	for (j = 0; j < 8; j++)
{	
	if ((i + j) % 2 == 0)
{
	printf(" ");
}	else
{
	printf("#");
}
}
	printf("\n");
}
}
