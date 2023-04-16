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

	while (h != NULL)
	{
		printf("%s, %u\n", h->str, h->len);
		h = h->next;
		n++;
	}
	return (n);
}
