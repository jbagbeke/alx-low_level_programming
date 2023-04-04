#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 *listint_len - Function to return number of elements
 *@h: Header node
 *Return: Number of elements (num)
 *
 *
 */

size_t listint_len(const listint_t *h)
{
	size_t num = 0;

	while (h != NULL)
	{
		h = h->next;
		num++;
	}


	return (num);
}
