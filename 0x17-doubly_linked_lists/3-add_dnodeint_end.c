#include "lists.h"

/**
 * add_dnodeint_end - adds node at end of list
 * @head: Pointer to first node of d-list
 * @n: data of new node to be added
 * Return: New node added
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *node1, *ptr, *tmp1;

	node1 = malloc(sizeof(dlistint_t));
	if (!node1)
		return (NULL);

	node1->n = n;
	node1->next = NULL;

	ptr = *head;
	if (ptr == NULL)
	{
		*head = node1;
		node1->prev = ptr;
		return (node1);
	}

	while (ptr->next != NULL)
		ptr = ptr->next;

	ptr->next = node1;
	node1->prev = ptr;
	return (node1);
}
