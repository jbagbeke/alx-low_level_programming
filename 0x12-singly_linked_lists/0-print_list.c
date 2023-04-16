#include "lists.h"

/**
 *print_list - Function to print list of linked list
 *@h: Variable name of list to be printed
 *Return: Number of elements printed (n)
 *
 */
size_t print_list(const list_t *h)
{
	size_t n = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%u] %s\n", h->len, h->str);
		}
		h = h->next;
		n++;
	}

	return (n);
}
