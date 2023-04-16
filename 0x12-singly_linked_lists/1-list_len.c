#include "lists.h"

/**
 *list_len - Function to print number of nodes printed
 *@h: Variable name of list to be printed
 *Return: Number of nodes printed (n)
 */
size_t list_len(const list_t *h)
{
	size_t n = 0;

	while (h != NULL)
	{
		h = h->next;
		n++;
	}
	return (n);
}
