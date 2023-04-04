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

typedef struct node
{
	int data;
	struct node *next;
} listint_t;

size_t print_listint(const listint_t *h)
{
	int n = 0;
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
