#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 *print_listint - Function to print size of node
 *@h: Header node
 *Return: N, size of nodes
 *
 *
 */

size_t print_listint(const listint_t *h)
{
	size_t n = 0;
	const listint_t *hey = h;

	while (hey != NULL)
	{
		printf("%d ", hey->data);
		hey = hey->next;
		n++;
	}

	printf("\n");

	return (n);
}
