#include "lists.h"

/**
 * insert_dnodeint_at_index - Inserts node at index of d-list
 * @h: Pointer to first node of d-list
 * @idx: Index to insert the node
 * @n: data of new node to be inserted
 * Return: Address of new node created
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *node1, *ptr1, *ptr2;

	node1 = malloc(sizeof(dlistint_t));

	node1->n = n;
	node1->prev = NULL;
	node1->next = NULL;

	ptr1 = *h;

	if (idx == 0 || ptr1 == NULL)
	{
		node1->next = ptr1;
		*h = node1;
		return (node1);
	}

	while (idx >= 1)
	{
		ptr1 = ptr1->next;

		if (!ptr1)
			return (NULL);
		idx--;
	}

	ptr2 = ptr1->next;
	ptr1->next = node1;

	node1->prev = ptr1;
	node1->next = ptr2;

	ptr2->prev = node1;

	return (node1);
}
