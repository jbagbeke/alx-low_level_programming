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
	char *str;

	str = malloc(sizeof(list_t));

	while (h != NULL)
	{
		printf("[%u] %s\n", h->len, h->str);
		h = h->next;
		n++;

		if (str == NULL)
		{
			printf("[0] (nil)");
		}
	}

	free(str);
	return (n);
}
