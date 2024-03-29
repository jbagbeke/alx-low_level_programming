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
	size_t num = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		num++;
	}

	return (num);
}
