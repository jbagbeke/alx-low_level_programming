#include "lists.h"

/**
 *
 *
 *
 *
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *node1;

	node1 = malloc(sizeof(dlistint_t));

	node1->n = n;
	node1->prev = NULL;
	node1->next = NULL;

	if (*h == NULL)
		return (*h);


	while (idx >= 1)
	{
		*h = (*h)->next;
		if(*h == NULL)
			return (NULL);
		idx--;
	}
	return (*h);
}
