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

	if (head == NULL)
		return (head);


	while (index >= 1)
	{
		head = head->next;
		if(head == NULL)
			return (NULL);
		index--;
	}
}
