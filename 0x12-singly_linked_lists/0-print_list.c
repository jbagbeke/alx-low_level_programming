#include "lists.h"

/**
 *
 *
 *
 *
 */
size_t print_list(const list_t *h)
{
	size_t n = 1;

	if (h->str == NULL)
	{
		printf("[0] (nil)\n");
	}

	while (h != NULL)
	{
		printf("%s\n", h->str);
		h = h->next;
		n++;
	}
	return (n);
}
