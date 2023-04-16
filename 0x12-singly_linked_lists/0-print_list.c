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
	list_t *list1;
	
	list1 = malloc(sizeof(list_t));
	h = list1;

	if (list1->str == NULL)
	{
		printf("[0] (nil)\n");
	}

	while (h != NULL)
	{
		printf("%s\n", h->str);
		h = h->next;
		n++;
	}

	free(list1);
	return (n);
}
